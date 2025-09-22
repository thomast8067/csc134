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

    int roll1;
    int roll2;
    int point;  // roll if it doesn't immediately win/lose

    cout << "Enter two dice (press ENTER between)";
    cin >> roll1;
    cin >> roll2;
    
    int sum = roll1 + roll2;

    cout << "Roll 1: " << roll1 << endl;
    cout << "Roll 2: " << roll2 << endl;
    cout << "Total: " << sum << endl;

    if (sum==7) {
        cout << "Lucky seven -- You win!" << endl;
    }
    else {
        point = sum;
        cout << "Did not roll a seven." << endl;
        cout << "Your point is: " << point << endl;
    }

    return 0;
}

int roll() {

    return 6;
}