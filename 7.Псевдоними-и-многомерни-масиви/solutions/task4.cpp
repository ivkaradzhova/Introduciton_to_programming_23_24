#include <iostream>

const int N = 1028;

bool isMagicSquare(int arr[][N], int n) {
    int sum = 0;
    //get diagonal
    for(int i = 0; i < n; i++) {
        sum += arr[i][i];
    }
    //check opposite diagonal
    int currSum = 0;
    for(int i = 0; i < n; i++) {
        currSum += arr[i][n - 1 - i];
    }
    if(currSum != sum) {
        std::cout << "1";
        return false;
    }

    //check rows
    for(int i = 0; i < n; i++) {
        currSum = 0;
        for(int j = 0; j < n; j++) {
            currSum += arr[i][j];
        }
        if(currSum != sum) {
            std::cout << "2";
            return false;
        }
    }

    // check columns
    for(int i = 0; i < n; i++) {
        currSum = 0;
        for(int j = 0; j < n; j++) {
            currSum += arr[j][i];
        }
        if(currSum != sum) {
            std::cout << "3";
            return false;
        }
    }

    return true;

}

int main() {
    int n, m, arr[N][N];

    std::cin >> n;

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> arr[i][j];
        }
    }
    std::cout << isMagicSquare(arr, n);
}