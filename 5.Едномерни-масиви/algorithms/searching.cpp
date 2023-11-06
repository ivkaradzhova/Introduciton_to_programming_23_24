#include <iostream>

using namespace std;

bool linear_search(int arr[], int n, int element) {
    for(int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

// only for sorted arrays
bool binary_search(int arr[], int n, int element) {
    int left = 0, right = n - 1;
    while(left <= right) {
        int mid = (left + right) / 2;
        if (element < arr[mid]) {
            right = mid - 1;
        } else if(element > arr[mid]) {
            left = mid + 1;
        } else {
            return true;
        }
       
    }
    return false;
}

int main() {
    int arr[] = {1,2,3,4,5,6};

    std::cout << binary_search(arr, 6, 3);
    // for(int i = 0; i < 5 ; i++) {
    //     std::cout << arr[i] << std::endl;
    // }
    return 0;
}