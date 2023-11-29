#include<iostream>

using namespace std;

const int N = 100;
void toUpper(char* sentence) {
    while(*sentence != '\0') {
        if(*sentence >= 'a' && *sentence <= 'z') {
            *sentence = 'A' + (*sentence - 'a');
        }
        sentence++;
    }
}
int main() {
    char sentence[N];
    cin.getline(sentence, N);

    toUpper(sentence);
    cout << sentence;
}