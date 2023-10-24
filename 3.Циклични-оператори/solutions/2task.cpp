#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number;

    cin >> number;

    double sqrt_num = sqrt(number);


    // ------ solution with for -------

    // for (int i = 2; i <= sqrt_num; i++) {
    //     if (number % i == 0) {
    //         cout << "Not prime" << endl;
    //         return 0;
    //     }
    // }
    // cout << "Prime" << endl;

    // ------ solution with while -----
    cout << "Result using a 'while' cycle: ";
    int j = 2;
    while (j < sqrt_num && number % j != 0) {
        j++;
    }

    cout << ((j >= sqrt_num) ? ("Prime") : ("Not Prime")) << endl;

    //------ solution with while and return-------
    cout << "Result using a 'while' cycle with a 'return': ";
    j = 2;
    while (j < sqrt_num) {
        if (number % j == 0) {
            cout << "Not Prime" << endl;
            return 0;
        }
        j++;
    }
    cout << "Prime" << endl;
    return 0;
}