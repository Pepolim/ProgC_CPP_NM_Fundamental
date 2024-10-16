#include <stdio.h>

void f()
{
    /**
     * Keeps track of the current iteration count for the `f()` function.
     */
    static int i;

    i++;
    printf("%d\n", i);
}

int main()
{
    f();
    f();
    f();
    
    return 0;
}