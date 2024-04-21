#include<stdio.h>
int main()
{
    char arr1[5]; //take input: fahim
    printf("Taking input without using &: %s\n", arr1);
    scanf("%s", arr1);
    printf("Taking input using &: %s\n", &arr1);
    scanf("%s", &arr1);
    printf("Only for char, we can avoid '&' or keep it.\n");
    // try to find a fault. yeah! fahim needs array size 6 !!!
    //it is still works in windows but truely it is a fault/segmen. error
    printf("\nLet's fix ANOTHER error: \n");
    char arr2[6]; //take input: fahim //here's array size 6, YES!
    scanf("%s", &arr2);
    printf("%s", arr2);
    return 0;
}