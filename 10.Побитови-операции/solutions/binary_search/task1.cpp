#include <iostream>

using namespace std;
const int N = 1028;

int hasMatchingIndex(int arr[], int n) {
    int left = 0, right = n - 1;

    while(left <= right) {
        int mid = (left + right) / 2;
        if(arr[mid] == mid) {
            return mid;
        }
        if (arr[mid] > mid) {
            right = mid - 1;
        }
        if(arr[mid] < mid) {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n, arr[N];
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << hasMatchingIndex(arr, n);
}
