#include <iostream>

using namespace std;
const int N = 1028;

char toCapital(char letter) {
    return 'A' + letter - 'a';
}

void fixSentence(char sent[]) {
    if(strlen(sent) == 0) {
        return;
    }
    // Fix first letter
    if(*sent >= 'a' && * sent <= 'z') {
        *sent = toCapital(*sent);
    }

    //fix extra spaces
    char* sentCpy = sent;
    char result[N];
    int resultLen = 0;
    while(*sentCpy != '\0') {
        result[resultLen++] = *sentCpy;
        if(*sentCpy == ' ') {
            while (*sentCpy == ' ') {
                sentCpy++;
            }
        } else {
            sentCpy++;
        }
        
    }
    result[resultLen] = '\0';
    strcpy(sent, result);

    // fix punctuation
    sentCpy = sent;
    result[0] = '\0';
    resultLen = 0;

    while(*sentCpy != '\0') {
        if(*sentCpy == ',' || *sentCpy == '.' ||
           *sentCpy == '!' || *sentCpy == '?') {
            //check the previous symbol
            if(*(sentCpy - 1) == ' ') {
                result[--resultLen] = *sentCpy;
            } else {
                result[resultLen] = *sentCpy;
            }
            resultLen++;
            //check the next symbol
            if(*(sentCpy + 1) != ' ') {
                result[resultLen++] = ' ';
            }
        } else {
            result[resultLen++] = *sentCpy;
        }
        sentCpy++;
    }
    result[resultLen] = '\0';
    strcpy(sent, result);

}

int main() {
    char sent[N];
    cin.getline(sent, N);

    fixSentence(sent);
    cout << sent;
}