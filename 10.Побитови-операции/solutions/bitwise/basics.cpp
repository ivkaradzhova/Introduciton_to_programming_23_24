#include <iostream>

using namespace std;


int main() {
    int a = 2; // 10
    int b = 3; // 11

    // transform last bit to 1
    cout << "2(10) -> 3(11): " << (a | 1) << endl;
    cout << "3(11) -> 3(11): " << (b | 1) << endl;
    
    // transform all bits to 0
    cout << "2(10) -> 2(10): " << (a & 0) << endl;
    cout << "3(11) -> 2(10): " << (b & 0) << endl;

    // transform last bit to the opposite 
    cout << "2(10) -> 2(11): " << (a ^ 1) << endl;
    cout << "3(11) -> 2(10): " << (b ^ 1) << endl;

    // get the last bit and don't change it
    cout << "2(10) -> 0: " << (a & 1) << endl;
    cout << "3(11) -> 1: " << (b & 1) << endl;

    // don't change the whole number
    cout << "2(10): " << (a ^ 0) << endl;
    cout << "3(11): " << (b ^ 0) << endl;
    

   
}