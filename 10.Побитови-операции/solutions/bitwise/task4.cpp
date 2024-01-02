#include<iostream>
#include <cmath>
using namespace std;

int getLastKBits(int num, int k) {
    int intMax = (1 << 31) - 1;
    int mask = (intMax >> (31 - k));

    return num & mask;
}
int main() {
    int a, k;
    cin >> a >> k;
    std::bitset<32> a_bits(a);
    cout << a_bits << " " << getLastKBits(a, k);

}