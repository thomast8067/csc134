/*
CSC 134
M5LAB1 - CYOA 
T Thomas
11/5/25
*/

#include <iostream>

using namespace std;


int getPlayerChoice(int maxChoice);


int main(){

    int choice;
    int maxChoice = 3;

    cout << "Testing: Choose 1, 2, or 3." << endl;
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