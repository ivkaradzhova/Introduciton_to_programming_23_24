#include <iostream>
using namespace std;

int main() {
    int num, prev_num;

    cin >> num;
    prev_num = num;
    while (num >= prev_num) {
        prev_num = num;
        cin >> num;
    }

    return 0;
}