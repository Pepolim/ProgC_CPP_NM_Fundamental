#include <stdio.h>


/**
 * Recursively prints the countdown from the initial value of 1 to 0.
 * This is an implementation detail function and should not be called directly.
 */
int main()
{
    static int i = 1;
    
    if (i--)
    {
        printf("%d\n" ,i);

        main();
    }
    
    return 0;
}