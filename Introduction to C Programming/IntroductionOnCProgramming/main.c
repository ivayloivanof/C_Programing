/* 
 * Author: n1p3ha
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double squareRoot;
    int sequence;
    PrintHelloC();
    PrintMyName();
    PrintNumbers();
    PrintFirstNameAndLastName("Ivaylo", "Ivanov");
    PrintSquareRoot();
    PrintASequence(10);
    printf("Read number from console for print sequence of numbers. Input number: %d", &sequence);
    PrintASequence(sequence);
    return (EXIT_SUCCESS);
}

