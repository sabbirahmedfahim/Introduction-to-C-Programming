#include <stdio.h>

int main()
{
    int n;
    printf("%p\n", &n);
    n = 18;
    printf("%p\n\n", &n); //whatever change values, address remain same
 
    int x = 10;
    // int y = &n; //do not work because y is not a pointer
    int *y = &x; // y is a pointer variable, received the address of x
    printf("%p\n", y);

    return 0;
}