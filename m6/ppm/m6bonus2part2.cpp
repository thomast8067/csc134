/*
CSC 134
M6BONUS2 - PPM PART 2
T Thomas
11/24/25
*/

// "add a gradient on the inside of the circle so that the center of the circle is pure red, and then as it goes to the edge it goes to pure blue"

#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>

int main() {
    const int width = 200;
    const int height = 200;
    const int radius = 80;
    const int centerX = width / 2;
    const int centerY = height / 2;

    std::ofstream image("circlepart2.ppm");
    image << "P3\n" << width << " " << height << "\n255\n";

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            double distance = sqrt(pow(x - centerX, 2) + pow(y - centerY, 2));
            
            if (distance <= radius) {
                // Calculate gradient based on distance from center
                double ratio = distance / radius;
                
                // Red decreases as we get further from center
                int red = static_cast<int>((1.0 - ratio) * 255);
                // Blue increases as we get further from center
                int blue = static_cast<int>(ratio * 255);
                
                image << red << " 0 " << blue << " ";
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