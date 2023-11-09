#include <iostream>

using namespace std;

const int N = 1000;

void mergeArrays(int arr1[], int arr2[], int size1, int size2, int result[]) {
    int i = 0, j = 0, k = 0;
    while(i < size1 && j < size2) {
        if (arr1[i] > arr2[j]) {
            result[k] = arr2[j];
            j++;
        } else {
            result[k] = arr1[i];
            i++;
        }
        k++;
    }
    while(i < size1) {
        result[k++] = arr1[i++];
    }
    while(j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int n, m, arr1[N], arr2[N];
    cin >> n; 
    for(int i = 0;  i < n; i++) {
        cin >> arr1[i];
    }

    cin >> m; 
    for(int i = 0;  i < m; i++) {
        cin >> arr2[i];
    }

    int result[N * 2];
    mergeArrays(arr1, arr2, n, m, result);
    for(int i = 0;  i < n + m; i++) {
        cout << result[i] << " ";
    }

}