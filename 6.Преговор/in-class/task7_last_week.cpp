#include <iostream>

using namespace std;

const int N = 10000;

int getDivisors(int n, int commonDivisors[]) {
    int sizeCommonDiv = 0;
    for(int i = 2; i <= n; i++) {
        if (n % i == 0) {
            commonDivisors[sizeCommonDiv++] = i;
        }
    }
    return sizeCommonDiv;
}

int removeElements(int index, int arr[], int size) {
    swap(arr[index], arr[size - 1]);
    return --size;
}

int updateCommonDivisors(int n, int commonDivisors[], int size) {
    for(int i = 0; i < size; i++) {
        if(n % commonDivisors[i] != 0) {
            size = removeElements(i, commonDivisors, size);
            i--;
        }
    }
    return size;
}

int main() {
    int n, commonDivisors[N], sizeCommonDiv = 0;

    cin >> n;

    sizeCommonDiv = getDivisors(n, commonDivisors);

    for(int i = 0; i < sizeCommonDiv; i++) {
        cout << commonDivisors[i] << " ";
    }
    cout << endl;
    while(n != 0 && sizeCommonDiv != 0) {
        cin >> n;
        sizeCommonDiv = updateCommonDivisors(n, commonDivisors, sizeCommonDiv);
    }

    return 0;
}