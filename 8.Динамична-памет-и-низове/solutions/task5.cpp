#include<iostream>

using namespace std;

const int N = 1028;
void replace(char string[], char substring[], char replacement[]) {
    int substringLen = strlen(substring);
    int replacementLen = strlen(replacement);
    char* tempString = string;
    
    char result[N] = "";
    int resultSize = 0;

    while(*tempString != '\0') {
        if (strncmp(tempString, substring, substringLen) == 0) {
            strcat(result, replacement);
            tempString += substringLen;
            resultSize += replacementLen;
        } else {
            result[resultSize++] = *tempString;
            result[resultSize] = '\0';
            tempString++;
        }
    }
    strcpy(string, result);
}

int main() {
    char text[N], substring[N], replacement[N];
    cin.getline(text, N);
    cin.getline(substring, N);
    cin.getline(replacement, N);
    
    replace(text, substring, replacement);
    cout << text;
}