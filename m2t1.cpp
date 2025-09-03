/*
CSC 134
M2T1 - Customizable sales program
T Thomas
9/3/25
For the entrepreneur in you.
*/

#include <iostream>
using namespace std;

int main() {
    // ---start program---
    // declare static variables
    string item_name  = "insulin";
    int    item_count = 10;
    double item_price = 832.17;

    // variables for user input
    int purchase_count;
    int purchase_price;

    // give sales pitch
    cout << "Welcome to the " << item_name << " store!" << endl;
    cout << "Each " << item_name << " is $" << item_price << " per dose." << endl;
    cout << "We have " << item_count << " doses for sale." << endl;
    cout << endl;
    cout << "How many would you like to buy?" << endl;

    // user input
    cin >> purchase_count;

    // processing
    double total_cost = item_count * item_price;

    // output processing
    cout << "You are buying " << purchase_count << " " << item_name << "." << endl;
/*
    cout << "Buying all of the doses will cost $" << total_cost << endl;
    cout << "Thanks for shopping with us!" << endl;
*/

    // ---end program---
    return 0;
}