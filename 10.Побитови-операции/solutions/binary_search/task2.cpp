#include <iostream>
using namespace std;
const int N = 1028;

int getNumTries(int n, int g) {
    int left = 1, right = n, numTries = 1;

    while(left <= right) {
        int mid = (left + right) / 2;
        cout << left << " " << right << endl;
        if(mid == g) {
            return numTries;
        }
        if (mid > g) {
            right = mid - 1;
        }
        if(mid < g) {
            left = mid + 1;
        }
        numTries++;
    }
    return -1;
}

int main() {
    int n, g;
    cin >> n >> g;

    cout << getNumTries(n, g);
}