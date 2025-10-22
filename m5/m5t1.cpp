/*
CSC 134
M5T1 - Intro to Functions 
T Thomas
10/22/25
*/

#include <iostream>

using namespace std;

// Function declarations
void say_hello();

int get_the_answer();

double double_the_number();

int main() {
    // This program does nothing!
    double my_num;
    int another_num;

    cout << "Welcome to a very cool program indeed!" << endl;
    cout << "Please enter a number (with or without a decimal point.)" << endl;
    cin >> my_num;
    my_num = my_num * 2;
    cout << "Double the number is: " << my_num << endl;
    
    return 0;
}