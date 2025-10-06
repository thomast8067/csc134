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
int turn();

int game_score;
int turn_score;

int main() {
    int game_score = 0;
    int turn_score = 0;
    
    turn();
    return 0;
}

int turn() {
    //define variables
    int pig1;
    int pig2;
    bool pig_out;

    srand(time(0));
    pig_out = false;

    cout << "The first pig is a ";
    pig1 = roll();
    cout << endl;

    cout << "The second pig is a ";
    pig2 = roll();
    cout << endl;

    if ((pig1 * pig2) == 6){
        cout << "Pig out!\nYour score is now 0 and your turn ends." << endl;
        turn_score = 0;
        pig_out = true;
    }

    else if ((pig1 * pig2) == 4|(pig1 * pig2) == 9){
        cout << "Sider!\nYou score 1 point." << endl;
        turn_score = turn_score + 1;
    }

    else if ((pig1 * pig2) == 10|(pig1 * pig2) == 15){
        cout << "Razorback!\nYou score 5 points." << endl;
        turn_score = turn_score + 5;
    }

    else if ((pig1 * pig2) == 25){
        cout << "Double Razorback!\nYou score 20 points." << endl;
        turn_score = turn_score + 20;
    }

    else if ((pig1 * pig2) == 14|(pig1 * pig2) == 21){
        cout << "Trotter!\nYou score 5 points." << endl;
        turn_score = turn_score + 5;
    }

    else if ((pig1 * pig2) == 49){
        cout << "Double Trotter!\nYou score 20 points." << endl;
        turn_score = turn_score + 20;
    }

    else if ((pig1 * pig2) == 22|(pig1 * pig2) == 33){
        cout << "Snouter!\nYou score 10 points." << endl;
        turn_score = turn_score + 10;
    }

    else if ((pig1 * pig2) == 121){
        cout << "Double Snouter!\nYou score 40 points." << endl;
        turn_score = turn_score + 40;
    }

    else if ((pig1 * pig2) == 26|(pig1 * pig2) == 39){
        cout << "Leaning Jowler!\nYou score 15 points." << endl;
        turn_score = turn_score + 15;
    }

    else if ((pig1 * pig2) == 169){
        cout << "Double Leaning Jowler!!!!!\nYou score 60 points." << endl;
        turn_score = turn_score + 60;
    }

    
    cout << turn_score << endl;

    if (pig_out == false) {
        cout << "Do you want to roll again? (Y/N)" << endl;
        string again;
        cin >> again;
        if (again == "Y"|again == "y") {
            turn();
        }
    }
    return turn_score;
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
    // this is probably a very bad way to do this

    if (pig_roll <= LEANING_JOWLER){
        pig_value = 13;
        cout << "leaning jowler.";
    }

    else if (pig_roll <= SNOUTER){
        pig_value = 11;
        cout << "snouter.";
    }

    else if (pig_roll <= TROTTER){
        pig_value = 7;
        cout << "trotter.";
    }

    else if (pig_roll <= RAZORBACK){
        pig_value = 5;
        cout << "razorback.";
    }

    else if (pig_roll <= SIDE_DOT){
        pig_value = 3;
        cout << "side (dot).";
    }

    else if (pig_roll <= SIDE_NO_DOT){
        pig_value = 2;
        cout << "side (no dot).";
    }

    return pig_value;
}