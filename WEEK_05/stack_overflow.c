#include<stdio.h>

void hello()
{
    printf("hello\n\n\n");
    hello();
}

int main()
{
    hello();
    
    return 0;
}