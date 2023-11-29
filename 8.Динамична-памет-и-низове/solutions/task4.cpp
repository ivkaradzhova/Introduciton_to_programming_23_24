#include<iostream>

using namespace std;

const int MAX_DIGITS = 10;

int toInt(char str_num[]) {
    int number = 0;
    while(*str_num != '\0') {
        number += (*str_num - '0');
        number *= 10;
        str_num++;
    }
    return number/10;
}

int main() {
    char n[MAX_DIGITS];
    cin.getline(n, MAX_DIGITS);

    int number = toInt(n);

    cout << number;
}