/*
CSC 134
M1HW1 - Knives out
T Thomas
8/27/25
I am Benoit Blanc's #1 fanboy. Go detective go.
*/

#include <iostream>
using namespace std;

int main() {
    //---start program---
    // declaring variables
    string movie_name      = "Knives Out";
    int    year_of_release = 2019;
    double budget          = 40;
    double box_office      = 312.9;

    // spiel
    cout << movie_name << " is a murder mystery movie made by Rian Johnson." << endl;
    cout << "It released in " << year_of_release << " and made $" << box_office << " million." << endl;

    // profit calculation
    double profit = box_office - budget;

    // spiel pt ii
    cout << "With a budget of $" << budget << " million, that means the movie made $" << profit << " million in revenue." << endl;
    cout << "At some point in the movie that I do not rememeber off the top of my head, Benoit Blanc says \"The donut hole has a hole in its center,\" which out of context doesn't make sense lmao." << endl;

    //---end program---
    return 0;
}