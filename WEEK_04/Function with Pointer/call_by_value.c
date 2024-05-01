#include <stdio.h>
void call_by_value(int x)
{
    x = 200;
    int *p = &x;
    printf("memory address of x(func): %p\n", *p);
    printf("value of x(func): %d\n", x);
    printf("We got memory address using call by value :)\n\n");
    
}
int main()
{
    int x = 10;
    int*p = &x;
    call_by_value(x); //we passed value
    printf("memory address of x(main): %p\n", *p);
    printf("value of x(main): %d\n", x);
    return 0;
}