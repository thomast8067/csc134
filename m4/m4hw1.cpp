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

    while (num <= MAX_NUMBER)
    {
        int product = 5 * num; 
        cout << "5 times " << num << " equals " << product << "." << endl;
        num++;
    }
}