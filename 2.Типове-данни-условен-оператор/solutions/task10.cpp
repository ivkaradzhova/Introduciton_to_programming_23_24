#include <iostream>

using namespace std;

int main() {
    int cat_fat_percentage;

    cin >> cat_fat_percentage;

    cout << "Your cat is a ";
    if(cat_fat_percentage >= 0 && cat_fat_percentage <= 15) {
        cout << "Skelton" << endl;
    } else if(cat_fat_percentage >= 16 && cat_fat_percentage <= 25) {
        cout << "Fine boi" << endl;
    } else if(cat_fat_percentage >= 26 && cat_fat_percentage <= 35) {
        cout << "Chonk" << endl;
    } else if(cat_fat_percentage >= 36 && cat_fat_percentage <= 45) {
        cout << "Hecking Chonk" << endl;
    } else if(cat_fat_percentage >= 46 && cat_fat_percentage <= 55) {
        cout << "Hefty Chonk" << endl;
    } else if(cat_fat_percentage >= 56 && cat_fat_percentage <= 65) {
        cout << "Mega Chonk" << endl;
    } else if(cat_fat_percentage >= 65 && cat_fat_percentage <= 100) {
        cout << "Oh lawd, he comin!" << endl;
    } else {
        cout << "Error" << endl;
    }


    return 0;
}
