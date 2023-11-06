#include<iostream>
using namespace std;

void moveNegatveNumbers(int arr[], int n) {
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] < 0) {
            for(int j = i; j < n - 1; j++) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[1028];

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    moveNegatveNumbers(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;;
    }
}