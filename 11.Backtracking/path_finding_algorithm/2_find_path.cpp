#include<iostream>
using namespace std;

const int N = 5;
const int MAX_PATH = N * N;

// findPath returns the size of the path and writes the path in the variable path[2][MAX_PATH].
int findPath(int map[][N], int currX, int currY, int goal, int path[2][MAX_PATH], int currPathSize) {
    // Check if we can move to the current spot.
    if(currX < 0 || currY < 0 || currX >= N || currY >= N || map[currX][currY] == 0) {
        return -1;
    }
    
    // Check if we have reached the destination.
    if(map[currX][currY] == goal) {
        return currPathSize;
    }

    // If we haven't reached the goal or a dead end,
    // we add the current cell to the path and continue to traverse the neighbours.
    path[0][currPathSize] = currX;
    path[1][currPathSize] = currY;
    currPathSize++;

    // But to avoid cycles, we first mark our current cell as visited.
    map[currX][currY] = 0;

    // Checking if there is a path up.
    int pathSize = findPath(map, currX - 1, currY, goal, path, currPathSize);
    if(pathSize > -1) {
        return pathSize;
    }
    // Checking if there is a path to the right.
    pathSize = findPath(map, currX, currY + 1, goal, path, currPathSize);
    if(pathSize > -1) {
        return pathSize;
    }
    // Checking if there is a path down.
    pathSize = findPath(map, currX + 1, currY, goal, path, currPathSize);
    if(pathSize> -1) {
        return pathSize;
    }
    // Checking if there is a path left.
    pathSize = findPath(map, currX, currY - 1, goal, path, currPathSize);
    if(pathSize > -1) {
        return pathSize;
    }
 
    // If after treversing all neigbouring cell we didn't find a path,
    // this means there is no path from the current cell.
    return -1;
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

    int pathSize = findPath(map, 0, 0, 2, path, 0);

    for(int i = 0; i < pathSize; i++) {
        cout << path[0][i] << " " << path[1][i] << endl;
    }
}