/*
Description: A simple C program to generate the first n Pythagorean triples, where n is provided by way of a command-line argument.
Complexity: O(n)
Author: OshDubh
Date last modified: 10/10/2022
*/

// import necessary libraries
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // get how many triples we want to generate
    int max = atoi(argv[1]);

    // iterate over ever m and its respective n up to the max we want to create
    for (int m = 2; m <= max; ++m)
    {
        for (int n = 1; n < m; ++n)
        {
            // spit out the triple where a and b are the side lines to the hypotenuse c
            printf("a: %i \nb: %i \nc: %i\n\n", m*m - n*n, 2*m*n, m*m + n*n);
        }
    }
}
