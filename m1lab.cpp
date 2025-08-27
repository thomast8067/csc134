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

    cout << "Welcome to the " << item_name << " store!" << endl;
    // do the processing
    double total_cost = item_count * item_price;
    // end program
    return 0;
}