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
void prison_breakbars();
void prison_package();

void cake_gun();
void cake_phone();
void cake_key();


int main() {
    cout << "==================" << endl;
    cout << "   PRISON BREAK   " << endl;
    cout << "==================" << endl;
    cout << endl;

    cout << "You are in prison, sitting on your very bad mattress counting the bricks in the wall." << endl;
    cout << "But, in the back of your head you're plotting your epic escape that's due to happen any second now... now what was the first step again?" << endl;
    prison();
    
    return 0;
}

void prison() {
    cout << "Select an option with 1-3" << endl;
    cout << "1: Bide your time" << endl;
    cout << "2: Break the bars with your brute stregth" << endl;
    cout << "3: Get a package delivered" << endl;
    
    int decision;
    cin >> decision;
    cout << endl;

    if (decision == 1) {
        prison_wait();
    }
    else if (decision == 2) {
        prison_breakbars();
    }
    else if (decision == 3) {
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
    sleep(2);
    failure();
}

void prison_breakbars() {
    cout << "Using your brute strength you punch the bars into smithereens!" << endl;
    cout << "...is what you thought would happen. What actually happened is that you broke your fist. Nice going." << endl;
    sleep(2);
    failure();
}

void prison_package() {
    cout << "A guard mosies over to your cell with a box, \"Guess you're the birthday boy huh? Enjoy the cake for me.\"" << endl;
    cout << "The guard opens the box and spits on the cake inside it, then walks away laughing." << endl;
    cout << "Lucky for you, they don't know you had a friend on the outside sneak something into the pastry." << endl;

    cout << "Select an option with 1-3" << endl;
    cout << "1: Take out the gun" << endl;
    cout << "2: Take out the phone" << endl;
    cout << "3: Take out the skeleton key" << endl;
    
    int decision;
    cin >> decision;
    cout << endl;

    if (decision == 1) {
        cake_gun();
    }
    else if (decision == 2) {
        cake_phone();
    }
    else if (decision == 3) {
        cake_key();
    }
}

void cake_gun() {
    cout << "gun" << endl;
    sleep(2);
    failure();
}

void cake_phone() {
    cout << "phone" << endl;
    sleep(2);
    failure();
}

void cake_key() {
    cout << "key" << endl;
    sleep(2);
    failure();
}

void failure() {
    cout << "=============" << endl;
    cout << "   FAILURE   " << endl;
    cout << "=============" << endl;
    cout << endl;
}