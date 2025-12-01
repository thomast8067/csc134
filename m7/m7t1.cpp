/*
CSC 134
M7T1 - 
T Thomas
12/1/25
*/

#include <iostream>
using namespace std;

// Next time we'll put the class in a separate file
class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
	// constructor 
	Restaurant(string n, double r) {
		name = n;
		rating = r;
	}
	// getters and setters
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        // only valid ratings
        if (r >= 0 && r <= 5){
            rating = r;
        }
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
  
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;

    Restaurant breakfast = Restaurant("IHOP", 3.5);
    Restaurant lunch     = Restaurant("Olive Garden", 2.0);

    breakfast.printInfo();
    lunch.printInfo();

    return 0;
}