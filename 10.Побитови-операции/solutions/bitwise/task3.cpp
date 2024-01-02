#include <iostream>

int switchRightMost1(int num) {
    int mask = num & (~num + 1);

    return num ^ mask;
}

int main () {
    int a;
    std::cin >> a;

    std::bitset<32> a_bits(a);
    std::cout << a_bits << " " <<  switchRightMost1(a);

}