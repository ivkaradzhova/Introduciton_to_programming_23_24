#include <iostream>

using namespace std;

void removeElement(int arr[], int n, int index) {
    for(int i = index; i < n - 1; i++) {
        swap(arr[i], arr[i+1]);
    }
}

int removeDublicates(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                removeElement(arr, n--, j--);
            }
        }
    }
    return n;
}

int main() {
    int arr[1028];

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    n = removeDublicates(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;;
    }
}