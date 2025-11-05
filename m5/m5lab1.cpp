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

void cakeBomb();
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
    
    cout << R"(
======================
   MAKE YOUR CHOICE
======================)" << endl;

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

   cout << R"(You're in prison, sitting on a just terrible mattress counting the bricks in the wall.
But, in your head, you've been plotting a plan for your epic escape that's due to happen any second now...
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
...is what you thought would happen. What actually happened is that you broke your fist. Nice work.)" << endl;
    sleep(2);
    failure();
}

void prisonPackage() {

    int choice;

    cout << R"(A guard mosies over to your cell with a box, "Guess you're the birthday boy huh? Enjoy the cake for me."
The guard opens the box and spits on the cake inside, then walks away laughing.
Lucky for you, they don't know you have a friend on the outside who snuck something into the pastry.
The spit still hurt your feelings though.)" << endl;

    showChoices("Retrieve the bomb.",
                "Retrieve the phone.",
                "Retrieve the skeleton key.");

    choice = getPlayerChoice();

    if (choice == 1) {
        cakeBomb();
    }
    if (choice == 2) {
        cakePhone();
    }
    if (choice == 3) {
        cakeKey();
    }
}

void cakeBomb(){

    int choice;

    cout << R"(You pull the bomb out of the cake, finally some real power!
Where should you place it?)";

    showChoices("dummy.",
                "dummy.",
                "dummy.");

    choice = getPlayerChoice();

    if (choice == 1) {
        cout << "dummy";
    }
    if (choice == 2) {
        cout << "dummy";
    }
    if (choice == 3) {
        cout << "dummy";
    }
};

void cakePhone(){
    cout << R"(You pull the phone out of the cake and- oh the battery's dead.
And they didn't put a charger in here either.
Great.)" << endl;
    sleep(2);
    failure();
};

void cakeKey(){

    int choice;

    cout << R"(You pull the skeleton key out of the cake.
You wait until lights out then you make your move, reaching around the bars and opening the cell.
With your newfound freedom, where do you go now?)";

    showChoices("dummy.",
                "dummy.",
                "dummy.");

    choice = getPlayerChoice();

    if (choice == 1) {
        cout << "dummy";
    }
    if (choice == 2) {
        cout << "dummy";
    }
    if (choice == 3) {
        cout << "dummy";
    }
};