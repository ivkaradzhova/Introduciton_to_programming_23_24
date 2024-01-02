#include<iostream>
using namespace std;

bool isEven(int n) {
    return !(n & 1);
}

int countOnes(int n) {
    int sum = 0;
    while(n) {
        sum += (n & 1);
        n >>= 1;
    }

    return sum;
}

int getLastKBits(int n, int k) {
    int intMax = (1 << 31) - 1;

    int mask = (intMax >> (31 - k)) ;

    return (n & mask);
}

int main() {
    int n, k;
    cin >> n >> k;

    bitset<32> n_bits(n);
    bitset<32> k_bits(getLastKBits(n, k));
    

    cout << n_bits << " " << k_bits << endl;
}