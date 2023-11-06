#include <iostream>

using namespace std;
int main() {
    int number;

    cin >> number;
    int max_repetitions = 0;
    int max_reps_digit = 0;

    while(number != 0) {
        int repetitions = 1;
        int last_digit = number % 10;

        int remaining_number = number / 10;
        while(remaining_number != 0) {
            if(last_digit == remaining_number % 10) {
                repetitions++;
            }
            remaining_number /= 10;
        }
        
        if(max_repetitions < repetitions) {
            max_repetitions = repetitions;
            max_reps_digit = last_digit;
        }

        number /= 10;
    }

    cout << max_repetitions << " " << max_reps_digit << endl;
    return 0;
}