// used a new keyword: sizeof
#include<stdio.h>
int main()
{
    int arr1[5];
    printf("Each int: %d bytes\n", sizeof(int));
    printf("Size Of an int array with 5 element: %d bytes\n", sizeof(arr1)); //each int 4 byte
    float arr4[5];
    printf("\nEach float: %d bytes", sizeof(float));
    printf("\nSize Of an float array with 5 element: %d bytes\n", sizeof(arr4)); //each float 4 byte
    long long int arr2[5];
    printf("\nEach lld: %d bytes\n", sizeof(long long int));
    printf("Size Of an lld array with 5 element: %d bytes\n", sizeof(arr2)); //each lld 8 byte
    char arr3[8];
    printf("\nEach char: %d bytes", sizeof(char));
    printf("\nSize Of an lld array with 8 element: %d bytes\n", sizeof(arr3)); //each char 1 byte
    
    
    
    return 0;
}