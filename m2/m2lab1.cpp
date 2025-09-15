/*
CSC 134
M2Lab1 - A Crate Study
T Thomas
9/8/25
Who makes all the crates for the sokoban puzzles?
*/

#include <iostream>
using namespace std;

int main(){

    double length, width, height; // size of crate
    double volume;
    double production_cost, charge_to_customer; //pricing
    double profit;

    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = .5;

    // Intro
    cout << "Welcome to the crate pricing program!" << endl;
    cout << "Pleas input the dimensions of the crate." << endl;
    
    // Gather dimensions
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate prices and volume
    volume = length * width * height;
    production_cost = volume * COST_PER_CUBIC_FOOT;
    charge_to_customer = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge_to_customer - production_cost;

    // Display results
    cout << endl;
    cout << "Your crate is " << volume << " cubic feet." << endl;
    cout << "Customer Price....: $" << charge_to_customer << endl;
    cout << "Cost to produce...: $" << production_cost << endl;
    cout << "Profit............: $" << profit << endl;
    
    return 0;
}