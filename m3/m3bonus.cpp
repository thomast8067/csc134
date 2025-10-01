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


    cout << pig1 << "\n" << pig2 << endl;
    
    return 0;
}

int roll() {
    int pig_value;
    pig_value = rand() % 1000 + 1;
    return pig_value;
}