#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int PrintSquareRoot()
{
    printf("Square root of 12345 is %lf\n", sqrt(12345));
    return (EXIT_SUCCESS);
}

int PrintSquareRootFromConsole(double squareRoot)
{    
    printf("Square root of %lf is %lf\n", squareRoot, sqrt(squareRoot));    
    return(EXIT_SUCCESS);
}
