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

    // win on 7 or 11
    if (sum==7 || sum == 11) {
        cout << "Seven or Eleven - You win!" << endl;
    }

    // lose on 2, 3, 12
    else if (sum==2 || sum == 3 || sum == 12){
        cout << "Two, Three, or Twelve - Sorry, you lose.";
    } 

    else {
        point = sum;
        cout << "You rolled a point." << endl;
        cout << "Your point is: " << point << endl;
    }

    return 0;
}

int roll() {

    return 6;
}