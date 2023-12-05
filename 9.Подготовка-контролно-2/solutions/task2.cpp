#include <iostream>

using namespace std;

const int N = 1028;

int getWordIndx(char dictionary[][N], int& n, char* word) {
    int i = 0;
    while(i < n && strcmp(dictionary[i], word) != 0) {
        i++;
    }
    if(i == n) {
        return -1;
    }

    return i;
}

void addToDict(char dictionary[][N], int wordCount[], int& n, char* word) {
    int wordIndex = getWordIndx(dictionary, n, word);
    if(wordIndex == -1) {
        wordIndex = n++;
    }
    strcpy(dictionary[wordIndex], word);
    wordCount[wordIndex]++;
}


int countWords(char* sent, char dictionary[][N], int wordCount[]) {
    int n = 0;
    while(*sent != '\0') {
        char word[N] = "";
        int wordLen = 0;
        while((*sent >= 'a' && *sent <= 'z') || (*sent >= 'A' && *sent <= 'Z')) {
            word[wordLen++] = *sent;
            sent++;
        }
        
        if(wordLen != 0) {
            word[wordLen] = '\0';
            addToDict(dictionary, wordCount, n, word);
        } else {
            sent++;
        }
    }
    return n;
}

int main() {
    char sent[N];
    cin.getline(sent, N);

    char dictionary[N][N];
    int wordCount[N] = {0};

    int numWords = countWords(sent, dictionary, wordCount);

    for(int i = 0; i < numWords; i++) {
        cout << dictionary[i] << " " << wordCount[i] << endl;
    }

}
