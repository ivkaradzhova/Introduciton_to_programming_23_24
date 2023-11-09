#include <iostream>

using namespace std;

const int MAX_DIGITS = 10;

void reverseArr(int arr[], int len) {
    for(int i = 0; i < len / 2; i++) {
        swap(arr[i], arr[len - 1 - i]);
    }
}

bool compareArrays(int arr1[], int arr2[], int len) {
    for (int i = 0; i < len; i++) {
        if(arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int maxInfix(int n) {
    // transform to an array
    int numLen = 0, digits[MAX_DIGITS];
    while(n != 0) {
        digits[numLen++] = n % 10;
        n /= 10;
    }
    reverseArr(digits, numLen);
    int maxLen = 0;
    // traverse every prefix lenght
    for(int len = 1; len < numLen; len++) {
        //check if the prefix with length i can be found somewhere else in the array
        int j = 1;
        while (j < numLen - len + 1 && !compareArrays(digits, digits + j, len)) {
            // compare the infix which starts from index 'j' and has length 'len'
            // to the prefix with length 'len'
            j++;
        }
        if (j != numLen - len + 1) {
            maxLen = len;
        }
    }
    return maxLen;
}

int main() {
    int n;
    cin >> n;

    int maxLen = maxInfix(n);
    cout << maxLen << endl;

}