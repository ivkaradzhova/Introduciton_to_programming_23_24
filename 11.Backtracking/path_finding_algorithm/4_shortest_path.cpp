#include<iostream>
const int N = 5;
const int MAX_PATH = N * N;

void printPath(int path[2][MAX_PATH], int size) {
    for(int i = 0; i < size; i++) {
        std::cout << path[0][i] << "-" << path[1][i] << " ";
    }
    std::cout << std::endl;
}

void copyArray(int source[2][MAX_PATH], int destination[2][MAX_PATH], int size) {
    for(int i = 0; i < size; i++) {
        destination[0][i] = source[0][i];
        destination[1][i] = source[1][i];
    }
}

void findAllPaths(int map[][N], int currX, int currY, int goal, 
                  int path[2][MAX_PATH], int currPathSize,  
                  int minPath[2][MAX_PATH], int& minPathSize) {

    if(currX < 0 || currY < 0 || currX >= N || currY >= N || map[currX][currY] == 0) {
        return;
    }

    if(map[currX][currY] == goal) {
        if(currPathSize < minPathSize) {
            minPathSize = currPathSize;
            copyArray(path, minPath, minPathSize);
        }
        return;
    }

    path[0][currPathSize] = currX;
    path[1][currPathSize] = currY;
    currPathSize++;

    // But to avoid cycles, we first mark our current cell as visited.
    map[currX][currY] = 0;

    // Traverse all path starting from the cell above.
    findAllPaths(map, currX - 1, currY, goal, path, currPathSize, minPath, minPathSize);

    // Traverse all path starting from the cell on the right.
    findAllPaths(map, currX, currY + 1, goal, path, currPathSize, minPath, minPathSize);

    // Traverse all path starting from the cell down.
    findAllPaths(map, currX + 1, currY, goal, path, currPathSize, minPath, minPathSize);

    // Traverse all path starting from the cell on the left.
    findAllPaths(map, currX, currY - 1, goal, path, currPathSize, minPath, minPathSize);

    // Unmark the current cell, so it can be used in other paths.
    map[currX][currY] = 1;
}

int getShortestPath(int map[][N], int shortestPath[2][MAX_PATH]) {
    int shortestPathSize = MAX_PATH;
    int path[2][MAX_PATH] = {0};
    
    findAllPaths(map, 0, 0, 2, path, 0, shortestPath, shortestPathSize);

    return shortestPathSize;
}

int main() { 
    int map[N][N] = {
        {1,1,0,1,2},
        {1,1,1,1,1},
        {0,1,0,1,1},
        {1,1,0,0,1},
        {1,1,0,0,1}
    }; 

    int shortestPath[2][MAX_PATH] = {0};

    int shortestPathSize = getShortestPath(map, shortestPath);

    printPath(shortestPath, shortestPathSize);
}