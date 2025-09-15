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
    string item_name  = "sandwich";
    double item_price = 5.99;
    double tax_rate   = 0.08;

    // start receipt
    cout << "Thank you for purchasing a " << item_name << "!" << endl;
    cout << "The price of the $" << item_name << " is $" << item_price << "." << endl;

    // processing
    double tax_price = item_price * tax_rate;
    double total_cost = tax_price + item_price;

    // output processing
    cout << "The tax is " << tax_price << "." << endl;
    cout << "The total cost is $" << total_cost << "." << endl;
    cout << "Thanks for shopping with us!" << endl;

    // ---end program---
    return 0;
}