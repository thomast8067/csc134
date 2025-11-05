/*
CSC 134
M5LAB1 - CYOA 
T Thomas
11/5/25
*/

#include <iostream>
#include <unistd.h>

using namespace std;


int getPlayerChoice();
void showChoices(string choice1, string choice2, string choice3);

const int MAXCHOICE = 3;

void prison(); //start
void failure(); //lose condition

void prisonWait();
void prisonBreakBars();
void prisonPackage();

void cakeBombs();
void cakePhone();
void cakeKey();

int main(){
    
    prison();

    return 0;
}

int getPlayerChoice(){
    int choice;
    while(true){
        cout << "Your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= MAXCHOICE){
            return choice;
        }

        cout << "Please choose between 1 and " << MAXCHOICE << ".\n";
    }

}

void showChoices(string choice1, string choice2, string choice3){
    
    cout << "-~-~-MAKE YOUR CHOICE-~-~-" << endl;

    int num = 1;
    cout << num << ". " << choice1 << endl;
    num++;

    if(choice2 != ""){
        cout << num << ". " << choice2 << endl;
        num++;
    }

    if(choice3 != ""){
        cout << num << ". " << choice3 << endl;
        num++;
    }
}

void prison(){

   int choice;

   cout << R"(You are in prison, sitting on your real bad mattress counting the bricks in the wall.
But, in your head you've been plotting an epic escape that's due to happen any second now...
what was the first step again?
    )";

    showChoices("Bide your time.",
                "Break the bars with your brute stregth.",
                "Get a package delivered.");

    choice = getPlayerChoice();

    if (choice == 1) {
        prisonWait();
    }
    if (choice == 2) {
        prisonBreakBars();
    }
    if (choice == 3) {
        prisonPackage();
    }
}

void failure(){
    cout << R"(
=============
   FAILURE   
=============)" << endl;
}

void prisonWait(){
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

void prisonBreakBars(){
    cout << R"(Using your brute strength you punch the bars into smithereens!
...is what you thought would happen. What actually happened is that you broke your fist. Nice going.)" << endl;
    sleep(2);
    failure();
}

void prisonPackage() {

    int choice;

    cout << R"(A guard mosies over to your cell with a box, "Guess you're the birthday boy huh? Enjoy the cake for me."
The guard opens the box and spits on the cake inside it, then walks away laughing.
Lucky for you, they don't know you had a friend on the outside sneak something into the pastry.
The spit still hurt your feelings though.)" << endl;

    showChoices("Take out some bombs.",
                "Take out a phone.",
                "Take out a skeleton key.");

    choice = getPlayerChoice();

    if (choice == 1) {
        cakeBombs();
    }
    if (choice == 2) {
        cakeKey();
    }
    if (choice == 3) {
        cakePhone();
    }
}