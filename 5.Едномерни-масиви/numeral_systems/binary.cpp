#include <iostream>
#include <cmath>
using namespace std;

const int MAX_SIZE = 32;

void reverse(bool arr[], int len) {
    for(int i = 0; i < len / 2; i++) {
        swap(arr[i], arr[len - i - 1]);
    }
}

int to_binary(int num, bool binaryNum[]) {
    if(num < 0){
        throw std::exception();
    }

    int binNumberLenght = 0;

    while(num > 0) {
        binaryNum[binNumberLenght++] = num % 2;
        num /= 2;
    }

    reverse(binaryNum, binNumberLenght);
    return binNumberLenght;
}

int to_decimal(bool num[], int size) {
    int result = 0;
    for(int i = 0; i < size; i++) {
        result += pow(2, size - i - 1) * num[i];
    }
    return result;

}

int main() {
    int num;

    cin >> num;
    bool binaryNum[MAX_SIZE] = {0};
    int len = to_binary(num, binaryNum);

    for(int i = 0; i < len; i++) {
        cout << binaryNum[i];
    }
    cout << to_decimal(binaryNum, len);
}