#include<stdio.h>

void sum(int a, int b) // This is a function with parameters 'a' and 'b'
{
    printf("%d", a+b);
}

int main()
{
    sum(4,5); // Call the sum function with arguments 4 and 5
    
    /*Argument is Value, Parameter is Variable*/

    return 0;
}