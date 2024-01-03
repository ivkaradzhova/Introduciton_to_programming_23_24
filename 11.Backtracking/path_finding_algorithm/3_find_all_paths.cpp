#include<iostream>
const int N = 5;
const int MAX_PATH = N * N;

void printPath(int path[2][MAX_PATH], int size) {
    for(int i = 0; i < size; i++) {
        std::cout << path[0][i] << "-" << path[1][i] << " ";
    }
    std::cout << std::endl;
}

// findAllPaths returns the size of the path and writes the path in the variable path[2][MAX_PATH].
void findAllPaths(int map[][N], int currX, int currY, int goal, int path[2][MAX_PATH], int currPathSize) {
    // Check if we can move to the current spot.
    if(currX < 0 || currY < 0 || currX >= N || currY >= N || map[currX][currY] == 0) {
        return;
    }
    
    // Check if we have reached the destination.
    if(map[currX][currY] == goal) {
        printPath(path, currPathSize);
        return;
    }

    // If we haven't reached the goal or a dead end,
    // we add the current cell to the path and continue to traverse the neighbours.
    path[0][currPathSize] = currX;
    path[1][currPathSize] = currY;
    currPathSize++;

    // But to avoid cycles, we first mark our current cell as visited.
    map[currX][currY] = 0;

    // Traverse all path starting from the cell above.
    findAllPaths(map, currX - 1, currY, goal, path, currPathSize);

    // Traverse all path starting from the cell on the right.
    findAllPaths(map, currX, currY + 1, goal, path, currPathSize);

    // Traverse all path starting from the cell down.
    findAllPaths(map, currX + 1, currY, goal, path, currPathSize);

    // Traverse all path starting from the cell on the left.
    findAllPaths(map, currX, currY - 1, goal, path, currPathSize);

    // Unmark the current cell, so it can be used in other paths.
    map[currX][currY] = 1;
}

int main() { 
    int map[N][N] = {
        {1,1,0,1,2},
        {1,1,1,1,1},
        {0,1,0,1,1},
        {1,1,0,0,1},
        {1,1,0,0,1}
    }; 

    int path[2][MAX_PATH] = {0};

    findAllPaths(map, 0, 0, 2, path, 0);
}