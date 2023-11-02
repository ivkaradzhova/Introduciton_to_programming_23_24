#include <iostream>

using namespace std;

const int SIZE = 128;

bool hasDuplicateDigits(int n) {
    bool mask[10] = {0};

    while(n > 0) {
        if(mask[n%10]) {
            return true;
        } else {
            mask[n%10] = 1;
        }
        n /= 10;
    }
    return false;
}

int main () {
    int num;
    cin >> num;

    std::cout << hasDuplicateDigits(num);
       
}