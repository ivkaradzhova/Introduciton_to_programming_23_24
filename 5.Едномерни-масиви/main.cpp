#include <iostream>

using namespace std;

int arraySum(int arr[], int len) {
    int sum = 0;
    cout << sizeof(arr) << endl;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[6] = {1,1,1,1,1,1};
    cout << sizeof(arr) << endl;
    cout << arraySum(arr, 6) << endl;
    return 0;
}