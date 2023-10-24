#include <iostream>
using namespace std;

int main() {
    char symbol;

    cin >> symbol;

    if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z')) {
        cout << "letter" << endl;
    } else if (symbol >= '0' && symbol <= '9') {
        cout << "digit" << endl;
    } else {
        cout << "other" << endl;
    }

    return 0;
}