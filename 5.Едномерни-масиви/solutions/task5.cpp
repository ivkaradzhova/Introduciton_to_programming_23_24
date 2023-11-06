#include <iostream>

using namespace std;

bool hasDuplicateDigits(int n) {
    bool mask[10] = {0};
    while(n != 0) {
        if(mask[n % 10]) {
            return true;
        } else {
            mask[n %10] = true;
        }
        n /= 10;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    cout << hasDuplicateDigits(n) << endl;

}