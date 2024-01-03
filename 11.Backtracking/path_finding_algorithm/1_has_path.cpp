#include<iostream>
using namespace std;

const int N = 5;

// hasPath returns if there is a path in the map from (currX, currY) to the goal.
bool hasPath(int map[][N], int currX, int currY, int goal) {
    // Check if we can move to the current spot.
    if(currX < 0 || currY < 0 || currX >= N || currY >= N || map[currX][currY] == 0) {
        // If we can't, that means the current path we are taking is NOT a solution.
        return false;
    }
    
    // Check if we have reached the destination.
    if(map[currX][currY] == goal) {
        // If we have, that means the current path we are taking is a solution.
        return true;
    }

    // If we haven't reached the goal or a dead end,
    // we can continue to traverse the neighbouring cells. 

    // But to avoid cycles, we first mark our current cell as visited.
    map[currX][currY] = 0;

    // Checking if there is a path up.
    if(hasPath(map, currX - 1, currY, goal)) {
        return true;
    }
    // Checking if there is a path to the right.
    if(hasPath(map, currX, currY + 1, goal)) {
        return true;
    }
    // Checking if there is a path down.
    if(hasPath(map, currX + 1, currY, goal)) {
        return true;
    }
    // Checking if there is a path left.
    if(hasPath(map, currX, currY - 1, goal)) {
        return true;
    }
 
    // If after treversing all neigbouring cell we didn't find a path,
    // this means there is no path from the current cell.
    return false;
}

int main() { 
    int map[N][N] = {
        {1,1,0,1,2},
        {1,1,1,1,1},
        {0,1,0,1,1},
        {1,1,0,0,1},
        {1,1,0,0,1}
    }; 

    std::cout << hasPath(map, 0, 0, 2);
}