/*
CSC 134
M5LABA - Loop Fundamentals
T Thomas
10/29/25
*/

#include <iostream>
#include <cmath>

using namespace std;

void health_regen();

int main() {

    health_regen();

    return 0;
}

void health_regen(){

    double health;
    double maxHealth;
    const double HEALING = 10;
    
    double whiteBars;
    double blackBars;

    cout << "What is your current health? ";
    while (!(cin >> health) || !(health > 0)) {
            cout << "Invalid input. Try again: ";
            cin.clear(); // Reset input errors
            cin.ignore(10000, '\n'); // Remove bad input
    }

    cout << "What is your max health? ";
    cin >> maxHealth;

    cout << "Resting until healed..." << endl;

    while(health <= maxHealth){
        cout << "Your health: " << health << "/" << maxHealth << "\t" ;
        
        whiteBars = round((health / maxHealth) * 10);
        blackBars = 10 - whiteBars;

        for (int i = 0; i < whiteBars; i++)
        {
            cout << "█";
        }

        for (int i = 0; i <= blackBars - 1; i++)
        {
            cout << "░";
        }

        cout << endl;
        
        health += HEALING;
    }

    if(health > maxHealth){
        health = maxHealth;
        cout << "Your health: " << health << "/" << maxHealth << "\t" ;

        whiteBars = round((health / maxHealth) * 10);
        blackBars = 10 - whiteBars;

        for (int i = 0; i < whiteBars; i++)
        {
            cout << "█";
        }

        for (int i = 0; i <= blackBars - 1; i++)
        {
            cout << "░";
        }

        cout << endl;
    }

    cout << "Fully rested" << endl;
}