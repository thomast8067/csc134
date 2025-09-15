/*
CSC 134
M2T1 - Customizable sales program
T Thomas
9/3/25
For the entrepreneur in you.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // ---start program---
    // declare static variables
    string item_name  = "SANDWICH";
    double item_price = 5.99;
    double tax_rate   = 0.08;

    // start receipt
    cout << "Order Number 413" << endl;
    cout << item_name << " (x1)" << "\t$" << item_price << endl;
    cout << "----------------------" << endl;

    // processing
    cout << setprecision(2) << fixed;
    double tax_price = item_price * tax_rate; 
    double total_cost = tax_price + item_price;

    // output processing
    cout << "TAX" << "\t\t$"<< tax_price << endl;
    cout << "TOTAL" << "\t\t$" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;

    // ---end program---
    return 0;
}