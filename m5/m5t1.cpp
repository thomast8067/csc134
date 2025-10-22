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

double double_the_number(double);

int main() {
    // This program does nothing!
    double my_num;
    int another_num;

    say_hello();
    cout << "Please enter a number (with or without a decimal point.)" << endl;
    cin >> my_num;
    //my_num = my_num * 2;
    my_num = double_the_number(my_num);
    cout << "Double the number is: " << my_num << endl;

    return 0;
}

// Function definitions

void say_hello() {
    // says hi
    cout << "Welcome to a very cool program indeed!" << endl;
}

int get_the_answer(){
    //provides answer
}

double double_the_number(double the_num){
    //num times two
    double answer = the_num * 2;
    return answer;
}