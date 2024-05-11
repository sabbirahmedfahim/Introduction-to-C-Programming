#include <stdio.h>

int main()
{
    char arr1[5] = "Fahim";
    /*Index of arr1[5]: 0 1 2 3 4
    There are no extra cells (size) for the Null terminator ('\0').
    This lack of space for the null terminator can cause unexpected
    behavior(garbage values) in the program. */
    printf("arr1[5] = %s (garbage values)\n", arr1);

    arr1[5] = '\0'; // Fixing the issue by adding '\0' in the 5th index
    /*I was confused by a small issue!!
    char arr1[5] means arr1[size]. size == 5
    arr1[5] means arr1[index]     index == 5 */
    printf("arr1[5] = %s (NO garbage values)\n\n", arr1);

    //step-by-step
    // char arr2[6] = {'F', 'a', 'h', 'i', 'm'}; //add Null Char
    char arr2[6] = {'F', 'a', 'h', 'i', 'm', '\0'};
    printf("arr2[6] = ");
    for (int i = 0; i < 6; i++)
    {
        printf("%c", arr2[i]);
    }
    
    //without initializing array size
    char arr3[] = "Fahim";
    printf("\n\narr3[] = %s\n", arr3);
    
    // EASY SOLUTION
    char arr4[6] = "Fahim";
    printf("arr4[6] = %s\n", arr4);

    return 0;
}
