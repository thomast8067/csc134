/*
CSC 134
M3T2 - Pass the pigs simulator
T Thomas
10/1/25
Making bacon.
*/

#include <iostream>
#include <cstdlib>  //for rand() and srand()
#include <ctime>    //for time()

using namespace std;


int roll();

int main() {
    //define variables
    int pig1;
    int pig2;

    srand(time(0));

    pig1 = roll();
    pig2 = roll();

    cout << pig1 << "\n" << pig2 << endl;
    
    return 0;
}

int roll() {

    int pig_roll;
    pig_roll = rand() % 1000 + 1;

    /*
    assigning values to the numbers based off probabilties
    Position        Percentage
    Side (no dot)   34.9%
    Side (dot)      30.2%
    Razorback       22.4%
    Trotter         8.8%
    Snouter         3.0%
    Leaning Jowler  0.6%
    */

    const int SIDE_NO_DOT = 1000;
    const int SIDE_DOT = 605;
    const int RAZORBACK = 348;
    const int TROTTER = 124;
    const int SNOUTER = 36;
    const int LEANING_JOWLER = 6;

    int pig_value;

    // all pig values are prime numbers so we can leverage the fundamental theorem of arithmetic later

    if (pig_roll <= LEANING_JOWLER){
        pig_value = 13;
    }

    else if (pig_roll <= SNOUTER){
        pig_value = 11;
    }

    else if (pig_roll <= TROTTER){
        pig_value = 7;
    }

    else if (pig_roll <= RAZORBACK){
        pig_value = 5;
    }

    else if (pig_roll <= SIDE_DOT){
        pig_value = 3;
    }

    else if (pig_roll <= SIDE_NO_DOT){
        pig_value = 2;
    }

    return pig_value;
}