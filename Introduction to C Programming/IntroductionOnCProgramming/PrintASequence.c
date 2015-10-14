#include <stdlib.h>
#include <stdio.h>

int PrintASequence(int number)
{
    int i;
    for (i = 2; i < (number + 2); i++) {
        if (i%2 != 0) 
        {
            printf(", -%d", i);
        } 
        else 
        {
            if (i != 2)
            {
                printf(", %d", i);
            }
            else
            {
                printf("%d", i);
            }
            
        }
    }
    
    return (EXIT_SUCCESS);
}
