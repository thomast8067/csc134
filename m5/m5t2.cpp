/*
CSC 134
M5T2 - Squaring Functions 
T Thomas
11/9/25
*/

#include <iostream>

using namespace std;

int squareOfNum(int);
void printAnswerLine(int,int);

int main(){
    int number = 1;
    int square;
    
    while(number <= 10){
        square = squareOfNum(number);
        printAnswerLine(number,square);
        number = number + 1;
    }
    return 0;
}

int squareOfNum(int number){
    number = number * number;
    return number;
}

void printAnswerLine(int number,int square){
    cout << number << "\t" << square << endl;
}