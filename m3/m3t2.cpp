#include <iostream>
#include <stdlib.h>
#include <time>

int main{ 
    srand(time(0))

    int number1 = (rand()% 6 ) + 1;

    return 0;
}