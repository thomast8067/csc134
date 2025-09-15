/*
CSC 134
M2T1 - Customizable sales program
T Thomas
9/3/25
For the entrepreneur in you.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // ---start program---
    // declare static variables
    string item_name  = "sandwich";
    double item_price = 5.99;
    double tax_rate   = 0.08;

    // start receipt
    cout << "The price of the " << item_name << " is $" << item_price << "." << endl;

    // processing
    double tax_price = round(item_price * tax_rate * 100) / 100;
    double total_cost = tax_price + item_price;

    // output processing
    cout << "The tax is $" << tax_price << "." << endl;
    cout << "The total cost is $" << total_cost << "." << endl;
    cout << "Thank you for shopping with us!" << endl;

    // ---end program---
    return 0;
}