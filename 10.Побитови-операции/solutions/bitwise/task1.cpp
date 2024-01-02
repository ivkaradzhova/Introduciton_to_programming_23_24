#include <iostream>

bool isEven(int num) {
    return !(num & 1);
}

int main() {
    int a;
    std::cin >> a;

    std::cout << isEven(a) << std::endl;
}