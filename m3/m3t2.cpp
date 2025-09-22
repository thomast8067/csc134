/*
CSC 134
M3T2 - Craps simulator
T Thomas
9/22/25
90% of gamblers quit before they win big.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int roll();

int main() {
    int num = roll();
    cout << roll() << endl;
    // Main cycle
    /*
    roll 2d6
    branch if win, lose, or points
    rest comes later
    */
    int roll1 = 2;
    int roll2 = 5;

    int sum = roll1 + roll2;

    cout << "Roll 1: " << roll1 << endl;
    cout << "Roll 2: " << roll2 << endl;
    cout << "Total: " << sum << endl;

    if (sum==7) {
        cout << "Lucky seven -- You win!" << endl;
    }
    else {
        cout << "Did not roll a seven." << endl;
    }

    return 0;
}

int roll() {

    return 6;
}