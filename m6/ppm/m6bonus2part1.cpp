/*
CSC 134
M6BONUS2 - PPM PART 1
T Thomas
11/24/25
*/

// "write a simple c++ program to generate a ppm image that is 200x200 that draws a circle"

#include <iostream>
#include <fstream>
#include <cmath>

int main() {
    const int width = 200;
    const int height = 200;
    const int radius = 80;
    const int centerX = width / 2;
    const int centerY = height / 2;

    std::ofstream image("circle.ppm");
    image << "P3\n" << width << " " << height << "\n255\n";

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            double distance = sqrt(pow(x - centerX, 2) + pow(y - centerY, 2));
            
            if (distance <= radius) {
                // White pixel (255, 255, 255)
                image << "255 255 255 ";
            } else {
                // Black pixel (0, 0, 0)
                image << "0 0 0 ";
            }
        }
        image << "\n";
    }

    image.close();
    return 0;
}