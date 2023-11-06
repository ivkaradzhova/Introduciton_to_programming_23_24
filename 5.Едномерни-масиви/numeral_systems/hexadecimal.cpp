#include <iostream>
using namespace std;


void reverse(char arr[], int len) {
    for(int i = 0; i < len / 2; i++) {
        swap(arr[i], arr[len - i - 1]);
    }
}

char getHexDigit(int n) {
    switch (n) {
        case 0 ... 9: return '0' + n;
        case 10: return 'A'; 
        case 11: return 'B'; 
        case 12: return 'C'; 
        case 13: return 'D'; 
        case 14: return 'E'; 
        case 15: return 'F'; 
        default: throw std::exception();
    }
}

int getDecimalNum(char n) {
    switch (n) {
        case '0' ... '9': return n - '0';
        case 'A': return 10; 
        case 'B': return 11; 
        case 'C': return 12; 
        case 'D': return 13; 
        case 'E': return 14; 
        case 'F': return 15; 
        default: throw std::exception();
    }
}

int to_hex(int num, char hexNum[]) {
    if(num < 0){
        throw std::exception();
    }

    int hexNumberLenght = 0;

    while(num > 0) {
        hexNum[hexNumberLenght++] = getHexDigit(num % 16);
        num /= 16;
    }

    reverse(hexNum, hexNumberLenght);
    return hexNumberLenght;
}

int to_decimal2(char num[], int size) {
    int result = 0;
    for(int i = 0; i < size; i++) {
        result += pow(16, size - i - 1) * getDecimalNum(num[i]);
    }
    return result;

}

int main() {
    int numBase10;
    cin >> numBase10;

    const int MAX_SIZE = 8;
    char hex[MAX_SIZE];
    int len = to_hex(numBase10, hex);
    for(int i = 0; i < len; i++) {
        cout << hex[i];
    }
    cout  << endl << to_decimal2(hex, len) << endl;
}