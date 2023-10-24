#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    if (day <= 0 || month <= 0 || year < 0) {
        cout << "Invalid date" << endl;
        return 0;
    } 

    switch (month) {
        // Months with 31 days
        case 1:
        case 3:
        case 5: 
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 31) {
                cout << "Invalid date" << endl;
                return 0;
            }
            break;
        // February
        case 2:
            if (day > 28 && year % 4) {  // <=> day > 8 && year % 4 != 0
                cout << "Invalid date" << endl;
                return 0;
            } else if (day > 29 && !(year % 4)) {  // <=> day > 8 && year % 4 == 0
                cout << "Invalid date" << endl;
                return 0;
            }
            break;
        // Months with 30 days
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 30) {
                cout << "Invalid date" << endl;
                return 0;
            }
            break;
        default:
            cout << "Invalid date" << endl;
            return 0;
    } 

    cout << "Valid date" << endl;
    
    return 0;
}