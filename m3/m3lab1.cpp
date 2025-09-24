/*
CSC 134
M3T1 - CYOA
T Thomas
9/24/25

*/

#include <iostream>
#include <unistd.h>
using namespace std;

void prison(); //start
void failure(); //lose condition
void prison_wait();
void prison_lure();
void prison_breakbars();
void prison_package();


int main() {
    cout << "==================" << endl;
    cout << "   PRISON BREAK   " << endl;
    cout << "==================" << endl;
    cout << endl;

    cout << "You are in prison, sitting on your very bad mattress counting the bricks in the wall. \nBut, in the back of your head you're plotting your epic escape that's due to happen any second now... now what was the first step again?" << endl;
    prison();
    
    return 0;
}

void prison() {
    cout << "Select an option with 1-4" << endl;
    cout << "1: Bide your time" << endl;
    cout << "2: Lure a guard to your cell" << endl;
    cout << "3: Break the bars with your brute stregth" << endl;
    cout << "4: Get a package delivered" << endl;
    
    int decision;
    cin >> decision;

    if (decision == 1) {
        prison_wait();
    }
    else if (decision == 2) {
        prison_lure();
    }
    else if (decision == 3) {
        prison_breakbars();
    }
    else if (decision == 4) {
        prison_package();
    }
}

void prison_wait() {
    cout << "Ah yes, good things come to those who wait after all!" << endl;
    sleep(1);
    cout << "." << endl;
    sleep(1);
    cout << "." << endl;
    sleep(1);
    cout << "." << endl;
    sleep(1);
    cout << "...Okay this is boring, maybe next time choose a better option." << endl;
    failure();
}

void prison_lure() {
    cout << "lure";
}

void prison_breakbars() {
    cout << "breakbars";
}

void prison_package() {
    cout << "package";
}

void failure() {
    cout << "=============" << endl;
    cout << "   FAILURE   " << endl;
    cout << "=============" << endl;
    cout << endl;
}