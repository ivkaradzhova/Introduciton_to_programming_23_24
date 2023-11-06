#include<iostream>

using namespace std;

void getLongestRow(int arr[], int n, int* len, int* num) {
    int maxLen = 0;
    int maxLenNum = arr[0];
    int i = 0;

    while(i < n) {
        int j = i+1, currLen=1;
        while(j < n && arr[j] == arr[i]) {
            currLen++;
            j++;
        }
        if(currLen > maxLen) {
            maxLen = currLen;
            maxLenNum = arr[i];
        }
        i++;
    }
    *len = maxLen;
    *num = maxLenNum;
}

int main() {
    int arr[1028];

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int init_value;
    int* len, *number;
    getLongestRow(arr, n, len, number);

    cout << *len <<  " " << *number;
    return 0;
}