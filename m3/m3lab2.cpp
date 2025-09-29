/*
CSC 134
M3LAB2 - Grades & Goblins
T Thomas
9/29/25
Intellectual imps
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void letter_grader();
void combat();
int roll();

int main() {

    letter_grader();
    combat();
    return 0;
}

void letter_grader() {

    double number_grade;
    string letter_grade;

    const double A_GRADE = 90;
    const double B_GRADE = 80;
    const double C_GRADE = 70;
    const double D_GRADE = 60;

    cout << "Enter a number grade from 0-100:" << endl;
    cin >> number_grade;

    if (number_grade >= A_GRADE){
        letter_grade = "A";
    }

    else if (number_grade >= B_GRADE){
        letter_grade = "B";
    }

    else if (number_grade >= C_GRADE){
        letter_grade = "C";
    }

    else if (number_grade >= D_GRADE){
        letter_grade = "D";
    }

    else {
        letter_grade = "F";
    }

    cout << "A number grade of " << number_grade << " is: " << letter_grade << endl;

}

void combat() {

    int attack_roll, attack_bonus, enemy_armor;
    srand(time(0)); 

    cout << "You are fighting a goblin." <<endl;
    cout << "Enter attack bonus: ";
    cin >> attack_bonus;
    cout << "Enemy armor class: ";
    cin >> enemy_armor;

    attack_roll = roll();
    cout << "Roll: " << attack_roll << " + " << attack_bonus << " = " << attack_roll + attack_bonus << endl;
    if (attack_roll + attack_bonus >= enemy_armor) {
        cout << "Hit!" << endl;
    }
    else {
        cout << "Miss!" << endl;
    }

    cout << "Again? (Y/N): ";
    string again;
    cin >> again;
    if (again == "y"){
        combat();
    }
}

int roll() {
    const int SIDES = 20;
    int my_roll;
    my_roll = (rand() % SIDES) + 1;
    return my_roll;
}