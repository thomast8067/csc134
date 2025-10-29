/*
CSC 134
M5LABA - Loop Fundamentals
T Thomas
10/29/25
*/

#include <iostream>

using namespace std;

void health_regen();

int main() {

    health_regen();

    return 0;
}

void health_regen(){

    int health = 30;
    int max_health = 100;
    const int HEALING = 10;
    
    int white_bars;
    int black_bars;

    cout << "Resting until healed..." << endl;

    while(health <= max_health){
        cout << "Health: " << health << "/" << max_health << "\t" ;
        
        white_bars = health / HEALING;
        black_bars = (max_health / HEALING) - white_bars;

        for (int i = 0; i < white_bars; i++)
        {
            cout << "█";
        }

        for (int i = 0; i < black_bars; i++)
        {
            cout << "░";
        }

        cout << endl;
        
        health += HEALING;
    }

    cout << "Fully rested" << endl;
}