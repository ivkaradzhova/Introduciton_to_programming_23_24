#include <iostream>
#include <cmath>
using namespace std;

int func() {
    throw std::runtime_error("Error in func");
}

int func2() {
    //throw std::logic_error("Error 1in func");
    assert(9 < 6);
    cout << "ad";
    return 3;
}

int main() {
    unsigned a = 5 ;
    cout << &a << endl;

    cout << a - 6 << endl;


    return 0;
}