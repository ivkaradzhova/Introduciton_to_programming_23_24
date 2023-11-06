#include <iostream>

using namespace std;

int main() {
    int number = 0;

    cin >> number;

    int last = number % 10;
    number /= 10;
    int second_to_last = number % 10;
    number /= 10;
    
    bool is_first_larger = second_to_last > last;

    while(number != 0 && (second_to_last > last) == is_first_larger) {
        is_first_larger = !is_first_larger; 
        last = second_to_last;
        second_to_last = number % 10;
        number /= 10;  
    }

    cout << ((second_to_last > last) == is_first_larger) << endl;
    return 0;
}