#include <iostream>
using namespace std;

void sort_by_column(int** matrix, int col, int n) {
    for(int i = 0; i < n; i++) {
        int maxIndex = i;
        for(int j = i; j < n; j++) {
            if(matrix[j][col] > matrix[maxIndex][col]) {
                maxIndex = j;
            }
        }
        swap(matrix[i], matrix[maxIndex]);
    }
}

void print(int** matrix, int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << matrix[i][j] <<  " ";
        }
        cout << endl;
    }
}

int main() {
    int players, games;
    cin >> players >> games;

    int** results = new int*[players];
    for(int i = 0; i < players; i++) {
        results[i] = new int[games + 1];
        results[i][0] = i;
        for(int j = 1; j < games + 1; j++) {
            cin >> results[i][j];
        }
    }

    bool* is_top_player = new bool[players];
    for(int i = 1; i < games + 1; i++) {
        sort_by_column(results, i, players);
        
        for(int i = 0; i < 3; i++) {
            is_top_player[results[i][0]] = true;
        }
    }

    for(int i = 0; i < players; i++) {
        if(!is_top_player[i]) {
            cout << "Player " << i << " hasn't been in the top 3 of any game" << endl;
        }
    }

}