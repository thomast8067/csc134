/*
CSC 134
M6T1 - Pokemon counter
T Thomas
11/10/25
*/

#include <iostream>
using namespace std;

void method1(); // Without arrays
void method2(); // With arrays

int main() {
    method1();
    method2();
}

void method1(){
    // Method 1 without arrays
     cout << "Enter each Pokemon found per day." << endl;
     cout << "Day 0 = Monday, Day 4 = Friday" << endl;

     const int SIZE = 5;
     int count = 0;
     int pokeToday;
     int pokeTotal = 0;
     double pokeAvg = 0;


     while (count < SIZE){
        cout << "Day " << count << ": ";
        cin >> pokeToday;
        pokeTotal += pokeToday;
        count++;
     }

     pokeAvg = (double)pokeTotal / SIZE;

     cout << "Total = " << pokeTotal << endl;
     cout << "Average = " << pokeAvg << endl;
}

void method2(){
    // Method 1 with arrays

    const int SIZE = 5;
    string days[SIZE] = {"Mon", "Tue", "Wed", "Thu", "Fri"}; // initialized
    int pokemon[SIZE]; // not initialized
    int pokeTotal = 0;
    double pokeAvg = 0;

    for(int i=0; i < SIZE; i++){
        cout << "Number of pokemon seen on " << days[i] << ": ";
        cin >> pokemon[i];
    }

    cout << "Day\tPokemon" << endl;

    for(int i=0; i < SIZE; i++){
        cout << days[i] << "\t" << pokemon[i] << endl;
        pokeTotal += pokemon[i];
    }

    pokeAvg = (double)pokeTotal / SIZE;
    cout << "Total = " << pokeTotal << endl;
    cout << "Average = " << pokeAvg << endl;
}
