#include<iostream>

using namespace std;

const int N = 1028, M = 514;

int main() {
    int n, m, arr[N][M];

    std::cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> arr[i][j];
        }
    }

    int minElements[N];

    for(int i = 0; i < n; i++) {
        int min = arr[i][0];
        for(int j = 0; j < m; j++) {
            if(arr[i][j] < min) {
                min = arr[i][j];
            }
        }
        minElements[i] = min;
    }

    for(int i = 0; i < n; i++) {
        cout << minElements[i] << " ";
    }
    cout << endl;
}