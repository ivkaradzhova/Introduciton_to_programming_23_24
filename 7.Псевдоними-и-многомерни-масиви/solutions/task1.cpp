#include <iostream>

const int N = 1028, M = 514;

void transpose(int arr[][M], int result[][N], int n, int m) {
    int min = std::min(n, m);
    int max = std::max(n, m);
    for(int i = 0; i < min; i++) {
        for(int j = 0; j < min; j++) {
            result[i][j] = arr[j][i];
        }
    }

    if(n > m){
        for(int i = m; i < n; i++) {
            for(int j = 0; j < m; j++) {
                result[j][i] = arr[i][j];
            }
        }
    }
    if(n < m){
        for(int i = n; i < m; i++) {
            for(int j = 0; j < n; j++) {
                result[i][j] = arr[j][i];
            }
        }
    }
}

int main() {
    int n, m, arr[N][M];

    std::cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> arr[i][j];
        }
    }

    int transposed[M][N];
    transpose(arr, transposed, n, m);
    for(int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << transposed[i][j] << " ";
        }
        std::cout << std::endl;
    }
}