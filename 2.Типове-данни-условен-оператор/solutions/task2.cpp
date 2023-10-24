#include <iostream>

using namespace std;

int main() {
    int distance, speed;

    cin >> distance >> speed;

    // In hours
    double hours = (double)distance/speed;
    cout << "Hours: " << hours << endl;

    //In whole minutes
    cout << "Minutes: " << (int)(hours * 60) << endl;

    //In hours and minutes
    double decimal_part = hours - int(hours);
    cout << "Hours: " << int(hours) << " Minutes: " << int(decimal_part*60) << endl;

}