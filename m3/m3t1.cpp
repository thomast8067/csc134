/*
CSC 134
M3T1 - Rectangle comparison
T Thomas
9/17/25
It's not a contest.
*/

#include <iostream>
using namespace std;

int main() {
    double length1, width1, length2, width2;
    cout << "Enter the length and width of the rectangles." << endl;
    cout << "First rectangle." << endl;
    cout << "Length: ";
    cin >> length1;
    cout << "Width: ";
    cin >> width1;
    cout << endl;
    cout << "Second rectangle." << endl;
    cout << "Length: ";
    cin >> length2;
    cout << "Width: ";
    cin >> width2;
    cout << endl;

    double area1 = length1 * width1;
    double area2 = length2 * width2;

    cout << "The area of the first rectangle is: " << area1 << endl;
    cout << "The area of the second rectangle is: " << area2 << endl;

    if (area1 > area2){
        cout << "The first rectangle is bigger than the second rectangle." << endl;
    }

    if (area2 > area1){
        cout << "The second rectangle is bigger than the first rectangle." << endl;
    }

    if (area1 == area2){
        cout << "The two rectangles are the same area." << endl;
    }

    return 0;
}