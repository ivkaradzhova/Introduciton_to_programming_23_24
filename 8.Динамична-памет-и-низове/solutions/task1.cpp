#include<iostream>

using namespace std;

void spiral(int** matrix, int n, int m) {
    int startCol = 0, startRow = 0, endCol = m - 1, endRow = n - 1;
    while(startCol <= endCol && startRow <= endRow) {
        for(int i = startCol; i <= endCol; i++) {
            cout << matrix[startRow][i] << " ";
        }
        startRow++;
        for(int i = startRow; i <= endRow; i++) {
            cout << matrix[i][endCol] << " ";
        }
        endCol--;

        if(endRow > startRow) {
            for(int i = endCol; i >= startCol; i--) {
                cout << matrix[endRow][i] <<  " ";
            }
            endRow--;
        }
        if(endCol > startCol) {
            for(int i = endRow; i >= startRow; i--) {
                cout << matrix[i][startCol] << " ";
            }
            startCol++;
        }
    }

}

int main() {
    int n, m;

    cin >> n >> m;
    int** matrix = new int*[n];

    for(int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    spiral(matrix, n, m);

    for(int i = 0; i < n; i++)  {
        delete[] matrix[i];
    }
    delete[] matrix;
}