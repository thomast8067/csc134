/*
CSC 134
M3LAB2 - Letter Grades
T Thomas
9/29/25

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void letter_grader();
void combat();

int main() {

    letter_grader();

    return 0;
}

void letter_grader() {

    double number_grade;
    string letter_grade;

    cout << "Enter a number grade from 0-100:" << endl;
    cin >> number_grade;

    letter_grade = "A";

    cout << "A number grade of " << number_grade << " is a(n) " << letter_grade << "." << endl;

}