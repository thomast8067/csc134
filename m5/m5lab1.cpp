/*
CSC 134
M5LAB1 - CYOA 
T Thomas
11/5/25
*/

#include <iostream>

using namespace std;


int getPlayerChoice(int maxChoice);
void showChoices(string choice1, string choice2, string choice3);

int main(){
    int choice;
    int maxChoice = 3;

    showChoices("This is choice 1","This is choice 2","This is choice 3");
    choice = getPlayerChoice(maxChoice);
    cout << "You chose: " << choice << endl;

    return 0;
}

int getPlayerChoice(int maxChoice){
    int choice;
    while(true){
        cout << "Your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= maxChoice){
            return choice;
        }

        cout << "Please choose between 1 and " << maxChoice << ".\n";
    }

}

void showChoices(string choice1, string choice2, string choice3){
    
    cout << "MAKE YOUR CHOICE" << endl;

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