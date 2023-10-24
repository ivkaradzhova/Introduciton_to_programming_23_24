#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    int last_digit = number % 10;
    int first_digit = number / 1000;

    // Remove the last digit
    number /= 10;
    number %= 100; // number = number % 100

    // A solution but doesn't work with examples like 1055
    cout << last_digit << number << first_digit << endl;

    // A better solution
    int result = last_digit * 1000 + number * 10 + first_digit;
    cout << result << endl;
    
    return 0;

}