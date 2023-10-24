#include <iostream>

using namespace std;

int main() {
    
    long long b;

    cout << sizeof(b) << endl;


    cout << "--------------" << endl;

    char c = 97;

    cout << double(c + 5) << endl;
    cout << "Size of char: " << sizeof(c) << endl; 

    cout << (!false) << endl;
    cout << (not false) << endl;


    cout << ((c > 100) ? "Bigger" : "Smaller") << endl; 
    if (c > 100) {
        cout << "Bigger" << endl;
    }
    else {
        cout << "Smaller" << endl;
    }
    
    return 0;
}