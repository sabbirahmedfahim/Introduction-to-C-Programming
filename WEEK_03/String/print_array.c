// Super Power of char arr[]: 
// i) Initialization (don't need to write: {'h', 'e', 'y'} __ write: "hey")
// ii)print [discussed here]
#include<stdio.h>
int main()
{
    char arr1[5] = "fahim"; 
    printf("Array Size: %d\n", sizeof(arr1));
    printf("%s\n", arr1); //found mistake. THINK how to solve
    char arr2[6] = "fahim\0"; 
    printf("\nArray Size: %d\n", sizeof(arr2));
    printf("%s", arr2); //printed! check the next code, without using \0 !
    char arr3[6] = "fahim";
    printf("\n\nArray Size: %d\n", sizeof(arr3));
    printf("%s", arr3); 
    char arr4[] = "fahim"; 
    printf("\n\nArray Size: %d !!\n", sizeof(arr4)); //automatically counts \0 char
    printf("%s\n", arr4);
    
    
    return 0;
}