#include <iostream>


const int MAX_SIZE = 32; 
const int MAX_HEX_SIZE = 8;

void reverse(bool arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        std::swap(arr[i], arr[n - 1 - i]);
    }
}

void reverse(char arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        std::swap(arr[i], arr[n - 1 - i]);
    }
}
void toBinary(unsigned n, bool result[], int* len) { // <=> funcName(int n, int* result, int len)
    int binNumberSize = 0;
    while(n > 0) {
        result[binNumberSize++] = n % 2;
        n /= 2;
    }
    reverse(result, binNumberSize);
    *len = binNumberSize;
}

char toHexDigit(int n) {
    switch(n) {
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

void toHex(unsigned n, char result[], int* len) { // <=> funcName(int n, int* result, int len)
    int hexNumberSize = 0;
    while(n > 0) {
        try {
            result[hexNumberSize++] = toHexDigit(n % 16);
        } catch (const std::exception& e) {
            std::cout << "Invalid symbol while trasnforming to hex: " << e.what() << std::endl;
        }
        n /= 16;
    }
    reverse(result, hexNumberSize);
    *len = hexNumberSize;
}


int main() {
    unsigned num;

    std::cin >> num;

    bool binNum[MAX_SIZE];
    int a = 7;
    int* sizeBinNum = &a;
    
    toBinary(num, binNum, sizeBinNum);
    
    std::cout << *sizeBinNum << std::endl;

    for(int i = 0; i < *sizeBinNum; i++) {
        std::cout << binNum[i];
    }
    std::cout << std::endl << "Size: " << *sizeBinNum << std::endl;

    std::cin >> num;
    char hexNum[MAX_HEX_SIZE];
    int* sizeHexNum = &a;

    toHex(num, hexNum, sizeHexNum);
    for(int i = 0; i < *sizeHexNum; i++) {
        std::cout << hexNum[i];
    }
    std::cout << std::endl << "Size: " << *sizeHexNum << std::endl;


}