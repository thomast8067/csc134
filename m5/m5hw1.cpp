/*
CSC 134
M5HW1 - Gold Attempt 
T Thomas
11/3/25
*/

#include <iostream>
#include <iomanip>

using namespace std;

void question1();
void question2();
void question3();
void question4();
void calc4_1();   //calc 1-3 are submenus in question 4
void calc4_2();
void calc4_3();
void question5();

int main(){
    int questionNumber;
    bool exit;

    exit = false;

    while(exit == false){
        cout << "Question 1: Rainfall Average" << endl;
        cout << "Question 2: Cuboid Calculator" << endl;
        cout << "Question 3: Roman Numeral Convertor" << endl;
        cout << "Question 4: Geometry Calculator" << endl;
        cout << "Question 5: Distance Traveled" << endl;
        cout << "Select a question, or enter 6 to exit: ";
        
        while (!(cin >> questionNumber) || questionNumber < 1 || questionNumber > 6) {
            cout << "Invalid input. Try again: ";
            cin.clear(); // Reset input errors
            cin.ignore(10000, '\n'); // Remove bad input
        }

        switch(questionNumber){
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
}

void question1() {
    
    string  month1,
            month2,
            month3;

    double  rain1,
            rain2,
            rain3;

    cout << "Enter month 1: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month 2: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter month 3: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    double averageRain = (rain1+rain2+rain3)/3;

    streamsize temp = cout.precision(); // stupid hack stuff to make this not interfere with other questions. idek what this is doing truthfully
    cout << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << averageRain << " inches." << endl;
    cout << setprecision(temp); // this concludes the stupid hack stuff
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
    int calcNumber;
    bool exit;

    exit = false;

    while(exit == false){
        cout << "1: Calculate the area of a Circle" << endl;
        cout << "2: Calculate the area of a Rectangle" << endl;
        cout << "3: Calculate the area of a Triangle" << endl;
        cout << "Select a question, or enter 4 to exit: ";
        
        while (!(cin >> calcNumber) || calcNumber < 1 || calcNumber > 4) {
            cout << "Invalid input. Try again: ";
            cin.clear(); // Reset input errors
            cin.ignore(10000, '\n'); // Remove bad input
        }

        switch(calcNumber){
            case 1:
                calc4_1();
                break;
            case 2:
                calc4_2();
                break;
            case 3:
                calc4_3();
                break;
            case 4:
                exit = true;
                break;
        }
    }
}

void calc4_1(){
    double radius;
    const double PI = 3.14159;
    double area;

    cout << "What is the radius of the circle? ";
    cin >> radius;

    area = PI*(radius*radius);

    cout << "The area of the circle is " << area << "." << endl;
}

void calc4_2(){
    double  length,
            width,
            area;

    cout << "What is the length of the rectangle? ";
    cin >> length;

    cout << "What is the width of the rectangle? ";
    cin >> width;

    area = length*width;

    cout << "The area of the rectangle is " << area << "." << endl;
}

void calc4_3(){
    cout << "calc3" << endl;
}

void question5() {
    int speed,
        hours;
    
    cout << "What is the speed of the vehicle in mph? ";
    while (!(cin >> speed) || speed < 0) {
        cout << "Invalid input. Try again: ";
        cin.clear(); // Reset input errors
        cin.ignore(10000, '\n'); // Remove bad input
    }

    cout << "How many hours has it traveled? ";
    while (!(cin >> hours) || hours < 1) {
        cout << "Invalid input. Try again: ";
        cin.clear(); // Reset input errors
        cin.ignore(10000, '\n'); // Remove bad input
    }

    cout << "HOUR\tDISTANCE TRAVELED" << endl;
    cout << "=======================" << endl;
    
    int i = 1;
    while(i <= hours){
        int currentHour = i;
        int currentDistance = i * speed; 
        
        cout << currentHour << "\t" << currentDistance << endl;
        i++;
    }
}