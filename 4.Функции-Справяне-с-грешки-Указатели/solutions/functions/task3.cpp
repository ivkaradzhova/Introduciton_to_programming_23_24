#include <iostream>
#include <cmath>

int getDigits(int number) {
    int digits = 0;
    while(number != 0) {
        number /= 10;
        digits++;
    }
    return digits;
}

int matchingSufPref(int number) {
    int len = 1, num_digits = getDigits(number);
    while (len <= num_digits / 2 ) {
        int pref = number / pow(10, num_digits - len);
        int suff = number % int(pow(10, len));

        if(pref == suff) {
            std::cout << pref << std::endl;
            return pref;
        }
        len++;
    }

    return -1;
}

int reverse(int number) {
    int result = 0;
    while (number != 0) {
        result = result * 10 + number % 10;
        number /= 10;
    }
    return result;
}


bool isMirrored(int number) {
    return number == reverse(number);
}

int main() {
    int number;
    std::cin >> number;

    std::cout << isMirrored(number);
    return 0;
}