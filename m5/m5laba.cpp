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

    while(health <= max_health){
        cout << "Health: " << health << "/" << max_health << endl;
        health = health + 10;
    }
}