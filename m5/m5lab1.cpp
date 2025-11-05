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

void prison() {

   int choice;

   cout << R"(You are in prison, sitting on your very bad mattress
counting the bricks in the wall. But, in the back of
your head you're plotting an epic escape that's due
to happen any second now...
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
        cout << "Headed around back..." << endl;
    }
    if (choice == 3) {
        cout << "Forget it, let's get pizza." << endl;
    }
}

void failure() {
    cout << R"(
=============
   FAILURE   
=============)" << endl;
}

void prisonWait() {
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