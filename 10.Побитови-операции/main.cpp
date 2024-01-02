#include<iostream>
#include <bitset>
using namespace std;

int main() {
    unsigned a = 120;
    int b = 97;

    std::bitset<sizeof(a) * 8> bits(a^b);
    std::cout << bits << std::endl;

    cout << (~a) + 121 << endl;
}