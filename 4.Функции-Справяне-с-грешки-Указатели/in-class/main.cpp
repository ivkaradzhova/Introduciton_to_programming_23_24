#include <iostream>

void swap(int a, int b) { // формални параметри
    std::cout << "Swapping ints" << std::endl;
    int tmp = a;
    a = b;
    b = tmp;
}

void swap(char a, char b) {
    std::cout << "Swapping chars" << std::endl;
    int tmp = a;
    a = b;
    b = tmp;
}

void swap(int* a, int* b) { // формални параметри
    std::cout << "Swapping int pointers" << std::endl;
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int plus(int a, int b);

int main() {
    int c = 5, d = 7;
    std::cout << c << d << std::endl;
    swap(c, d); // фактическите параметри
    std::cout << c << d << std::endl;

    char aa = 5, bb = 7;
    swap(aa, bb);

    int* ptr_c = &c, *ptr_d = &d;
    std::cout << c << " " << d << std::endl;
    swap(ptr_c, ptr_d);
    std::cout << c << " " << d << std::endl;

    //std::cout << plus(a, b) << std::endl;

    return 0;
}

int plus(int a, int b) {
    return a + b;
}