#include <iostream>

bool isPalindrome(int arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    const int big = 1028; 
    int arr[big];
    int n, len=0 ;
    std::cin >> n;
    while(n > 0) {
        arr[len++] = n % 10;
        n /= 10;
    }
    std::cout << isPalindrome(arr, len) << std::endl;
}