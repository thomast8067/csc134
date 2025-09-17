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
    cout << "Question 2" << endl;
}

void question3() {
    cout << "Question 3" << endl;
}

void question4() {
    cout << "Question 4" << endl;
}

int main(){
    // call each question as its own function

    question1();
    question2();
    question3();
    question4();
    return 0;
}