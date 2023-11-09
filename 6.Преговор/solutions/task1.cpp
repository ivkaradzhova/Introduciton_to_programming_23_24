#include <iostream>

using namespace std;

const int MAX_USERS = 10000;

void sortUsers(int ids[], int country[], int problems[], int n) {
    for (int i = 0; i < n; i++) {
        int maxProblems = problems[i];
        int maxIndex = i;
        for (int j = i; j < n; j++) {
            if (problems[j] > maxProblems) {
                maxProblems = problems[j];
                maxIndex = j;
            }
        }
        swap(problems[i], problems[maxIndex]);
        swap(country[i], country[maxIndex]);
        swap(ids[i], ids[maxIndex]);
    }
}   


int main() {
    int n, m;
    int userID[MAX_USERS], countryCode[MAX_USERS], problemsSolved[MAX_USERS];
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> userID[i] >> countryCode[i] >> problemsSolved[i];
    }

    cin >> m;
    sortUsers(userID, countryCode, problemsSolved, n);

    for (int i = 0; i < m; i++) {
        cout << userID[i] << " " << countryCode[i] << " " << problemsSolved[i] << endl;
    }
}