/*
CSC 134
M5LAB2 - Debug 
T Thomas
11/3/25
*/

#include <iostream>
using namespace std;

/*
Here are the program specifications.

The program will ask the user to enter the width and length of a rectangle. It will then calculate the area. Finally it will display all three values in well formatted output.

The program will contain the following functions as well as main().

getLength - Asks the user to enter a rectangle's length, and return that value as a double.

getWidth - Asks the user to enter a rectangle's width, and return that value as a double.

getArea - This function should take two arguments, length and width. It will calculate the area and return that value as a double.

displayData - This function should take three arguments, length, width, and area. It will then display these values as well formatted output. ("Well formatted" is subjective, at minimum each value should be clearly labeled. The Apple Orchard program from Module One is an example of the type of output format you might use.)
*/

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double  getLength();
double  getWidth();
double  getArea(double length, double width);
void    displayData(double length, double width, double area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double  getLength(){
    double length;
    cout << "What is the length?: ";
    cin >> length;
    return length;
}

double  getWidth(){
    double width;
    cout << "What is the width?: ";
    cin >> width;
    return width;
}

double  getArea(double length, double width){
    double area;
    area = length * width;
    return area;
}

void    displayData(double length, double width, double area){
    cout << "Rectangle is " << length << " by " << width << "." << endl;
    cout << "Area is: " << area << endl;
    return;
}