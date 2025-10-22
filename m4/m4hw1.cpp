/*
CSC 134
M4HW1 - Times Table 
T Thomas
10/22/25
*/

#include <iostream>

using namespace std;

int main(){
    
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 12;
    int num = MIN_NUMBER;
    int factor;

    cout << "Enter a number from 1 to 12: ";
    
    while (!(cin >> factor) || factor < 1 || factor > 12) {
        cout << "Invalid input. Try again: ";
        cin.clear(); // Reset input errors
        cin.ignore(10000, '\n'); // Remove bad input
    }

    while (num <= MAX_NUMBER)
    {
        int product = factor * num; 
        cout << factor << " times " << num << " is " << product << "." << endl;
        num++;
    }
}