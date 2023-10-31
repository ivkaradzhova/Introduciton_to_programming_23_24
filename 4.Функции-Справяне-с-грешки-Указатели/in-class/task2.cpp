#include <iostream>

int divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by 0");
    }
    throw std::logic_error("Something went wrong");
    return a / b;
}

int main(){
    int a = 8, b = 1;

    try {
        std::cout << divide(a, b) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error occured: " << e.what() << std::endl; 
    }
    std::cout << "After division" << std::endl;
    return 0;
}