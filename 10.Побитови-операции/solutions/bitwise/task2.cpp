#include <iostream>

int get1Bits(int num) {
    int sum = 0;
    while(num != 0) {
        sum += (num & 1);
        num >>= 1;
    }

    return sum;
}

int main () {
    int a;
    std::cin >> a;

    std::bitset<sizeof(a)* 8> a_bits(a >> 1);
    std::cout << a_bits << " " <<  get1Bits(a) << std::endl;
}