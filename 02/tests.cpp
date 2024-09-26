#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

/* count the binary32 numbers in the closed interval [start, stop] */
void countem (float start, float stop)
{
    float x;
    uint32_t count;
    count = 0;
    x = start;
    while (x <= stop) {
        count++;
        x = nextafterf (x, INFINITY);
    }
    printf ("there are %u binary32 numbers in [%15.8e, %15.8e]\n", count, start, stop);
}

int main (void)
{
    // countem (0.0f, 1000.0f);
    // countem (1e-2f, 1e3f);
    // countem (1e30f, 1e35f);
	float f = 0.9;
	std::bitset<16> x(0.8);
	std::cout << x << '\n';
    return EXIT_SUCCESS;
}