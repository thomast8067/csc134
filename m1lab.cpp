/*
CSC 134
M1Lab - Insulin sales program
T Thomas
8/27/25
How to extract wealth from the needy.
*/

#include <iostream>
using namespace std;

int main() {
    // ---start program---
    // declare all of our variables
    string item_name  = "insulin";
    int    item_count = 10;
    double item_price = 832.17;

    // give sales pitch
    cout << "Welcome to the " << item_name << " store!" << endl;
    cout << "Each " << item_name << " is $" << item_price << " per dose." << endl;
    cout << "We have " << item_count << " doses for sale." << endl;

    // two plus two is four minus one thats three quick maths
    double total_cost = item_count * item_price;

    // output quick maths
    cout << "Buying all of the doses will cost $" << total_cost << endl;
    cout << "Thanks for shopping with us!" << endl;
    
    // ---end program---
    return 0;
}