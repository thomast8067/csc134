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
    bool exit;

    cout << "Question 1: Rainfall Average" << endl;
    cout << "Question 2: Cuboid Calculator" << endl;
    cout << "Question 3: Roman Numeral Convertor" << endl;
    cout << "Question 4: Geometry Calculator" << endl;
    cout << "Question 5: Distance Traveled" << endl;
    cout << "Select a question, or enter 6 to exit: ";
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
        case 6:
            exit = true;
            break;
    }
}

void question1() {
    cout << "1";
}

void question2() {

    double  length,
            width,
            height,
            volume;
    
    cout << "Enter length: ";
    while (!(cin >> length) || length < 0) {
        cout << "Invalid input. Try again: ";
        cin.clear(); // Reset input errors
        cin.ignore(10000, '\n'); // Remove bad input
    }

    cout << "Enter width: ";
    while (!(cin >> width) || width < 0) {
        cout << "Invalid input. Try again: ";
        cin.clear(); // Reset input errors
        cin.ignore(10000, '\n'); // Remove bad input
    }

    cout << "Enter height: ";
    while (!(cin >> height) || height < 0) {
        cout << "Invalid input. Try again: ";
        cin.clear(); // Reset input errors
        cin.ignore(10000, '\n'); // Remove bad input
    }

    volume = length * width * height;

    cout << "The volume of the cuboid is " << volume << "." << endl;
}

void question3() {
    
    int number;

    cout << "Enter a number from 1-10: ";
    
    while (!(cin >> number) || number < 1 || number > 10) {
        cout << "Invalid input. Try again: ";
        cin.clear(); // Reset input errors
        cin.ignore(10000, '\n'); // Remove bad input
    }
    
    cout << "The roman numeral version of " << number << " is ";

    switch(number){
        case 1:
            cout << "I";
            break;
        case 2:
            cout << "II";
            break;
        case 3:
            cout << "III";
            break;
        case 4:
            cout << "IV";
            break;
        case 5:
            cout << "V";
            break;
        case 6:
            cout << "VI";
            break;
        case 7:
            cout << "VII";
            break;
        case 8:
            cout << "VIII";
            break;
        case 9:
            cout << "IX";
            break;
        case 10:
            cout << "X";
            break;
    }

    cout << "." << endl;
    
    return;
}

void question4() {
    cout << "4";
}

void question5() {
    cout << "5";
}