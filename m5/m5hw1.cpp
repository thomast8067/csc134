/*
CSC 134
M5HW1 - Gold Attempt 
T Thomas
11/3/25
*/

#include <iostream>

using namespace std;

void question1();
void question2();
void question3();
void question4();
void question5();

int main(){

    int question_number;

    cout << "Question 1: Rainfall Average" << endl;
    cout << "Question 2: Cuboid Calculator" << endl;
    cout << "Question 3: Roman Numeral Convertor" << endl;
    cout << "Question 4: Geometry Calculator" << endl;
    cout << "Question 5: Distance Traveled" << endl;
    cout << "Select a question: ";
    cin >> question_number;

    switch(question_number){
        case 1:
            question1();
            break;
        case 2:
            question2();
            break;
        case 3:
            question3();
            break;
        case 4:
            question4();
            break;
        case 5:
            question5();
            break;
    }
}

void question1() {
    cout << "1";
}

void question2() {
    cout << "2";
}

void question3() {
    cout << "3";
}

void question4() {
    cout << "4";
}

void question5() {
    cout << "5";
}