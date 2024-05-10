#include<stdio.h>
int main()
{
    int n = 5;

    printf("Pre-decrement:\n");
    // Pre-decrement: Decrements n first, then checks the condition
    while (--n)
    {
        printf("%d\n", n);
    }

    printf("\nPost-decrement:\n"); //*****
    // Post-decrement: Checks the condition first, then decrements x
    int x = 5;
    while (x--)
    {
        printf("%d\n", x);
    }
    
    
    return 0;
}