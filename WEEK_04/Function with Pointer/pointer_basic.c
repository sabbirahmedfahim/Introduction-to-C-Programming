#include <stdio.h>
int main()
{
    int x = 10;
    int *p = &x; // stored memory address of x
    // int * p = &x; //same
    // int *p = &x; //same
    printf("memory address of x:\n");
    printf("%p\n%p\n\n", p, &x); // notice: Format Specifier %p
    printf("memory address of p: %p\n", &p);
    printf("\nmemory address of x(integer version): %d\n\n", p);

    printf("dereference: taking value from reference");
    printf("\n%d\n", *p); // adding * means accessing value
    *p = 940;              // changing value using memory address
    printf("%d\n", *p);
    x = 99;
    printf("%d\n", *p);
    return 0;
}