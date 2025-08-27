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
    // start program
    // declare all of our variables
    string item_name = "insulin";
    int    item_count = 10;
    double item_price = 832.17;

    // give sales pitch
    cout << "Welcome to the " << item_name << " store!" << endl;
    cout << "Each " << item_name << " is $" << item_price << " per dose." << endl;

    // do the processing
    double total_cost = item_count * item_price;
    
    // end program
    return 0;
}