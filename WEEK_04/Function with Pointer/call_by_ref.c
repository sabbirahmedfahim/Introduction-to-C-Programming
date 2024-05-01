#include <stdio.h>

void ref_func(int *p)
{
    printf("\nvalue of p: %p\n", p);
    printf("value of x: %d\n\n", *p);

    *p = 33; // dereferencing & updated value of x!!
    // printf("%d\n", *p);
    // *p = 900;
    // printf("%d\n", *p);
}
int main()
{
    int x = 4444;
    printf("Address of x(before): %p\n", &x);

    // int *p = &x; //address of x
    printf("Value of x(before): %d\n", x);
    ref_func(&x); //Pointer received address of x 
    printf("Value of x(updated): %d\n\n", x);
    //main er x er value changed bhai re bhai

    printf("Address of x(updated): %p\n", &x);

    return 0;
}
/* 
  When using call by value, only a copy of the variable's value is passed to the function,
  not its address. This means you can't directly modify the original variable inside the function.
  
  On the other hand, with call by reference (passing the address of the variable), 
  you can directly access and modify the original variable using pointer dereferencing.
   
  Think of it like a backup system. When you have it in your hands, it's like having 
  a backup passkey. If it accidentally falls into the hands of a hacker, you will be hacked!!
*/


