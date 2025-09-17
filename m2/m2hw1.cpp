/*
CSC 134
M2HW1 - Four Parter
T Thomas
9/15/25
GO FOR THE GOLD NUMERO UNO LETS GOOOOOOOOOOOOO
*/

#include <iostream>
#include <iomanip>  // for setprecision()
using namespace std;

void question1() {
    //define vars
    string username;
    double balance;
    double deposit;
    double withdraw;

    cout << "Welcome to the bank!" << endl;
    cout << "Please input your name: ";
    getline(cin,username);
    cout << "Input your account balance: ";
    cin >> balance;
    cout << "Input how much you would like to deposit: " ;
    cin >> deposit;
    cout << "Input how much you would like to withdraw: ";
    cin >> withdraw;
    cout << endl;

    //calc time
    int account_number = rand();
    double new_balance = balance + deposit - withdraw;

    cout << setprecision(2) << fixed;
    cout << "Thank you! Here are your bank details:" << endl;
    cout << "NAME:\t\t\t" << username << endl;
    cout << "ACCOUNT NUMBER:\t\t" << account_number << endl;
    cout << "CURRENT BALANCE:\t$" << new_balance << endl;
    cout << "Thank you for banking with us!" << endl;

}

void question2() {
    //define vars
    double length, width, height;
    double volume;
    double production_cost, charge_to_customer;
    double profit;

    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = .52;

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
    cout << setprecision(2) << fixed;
    cout << "Customer Price:\t\t$" << charge_to_customer << endl;
    cout << "Cost to produce:\t$" << production_cost << endl;
    cout << "Profit:\t\t\t$" << profit << endl;
}

void question3() {
    //define vars
    int guests;
    int pizzas;
    int slices_per;

    cout << "How many guests are attending your party? ";
    cin >> guests;
    cout << "How many pizzas do you have? ";
    cin >> pizzas;
    cout << "How many slices is each pizza cut into? ";
    cin >> slices_per;

    //calc time
    int total_slices = pizzas * slices_per;
    int wanted_slices = guests * 3;
    int leftover = total_slices - wanted_slices;

    cout << "You will be left with " << leftover << " slice(s) of pizza." << endl;
}

void question4() {
    cout << "Question 4" << endl;
}

int main(){
    // call each question as its own function
    //question1();
    //question2();
    question3();
    question4();
    return 0;
}