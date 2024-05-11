#include <stdio.h>

int main()
{
    char arr[5]; // indices: 0 1 2 3 4
    fgets(arr, sizeof(arr) / sizeof(char), stdin);
    // When entering in the terminal, a newline creates...

    printf("%s\n\n", arr); // Input: Hello  Output: ? (Think why)

    printf("4th index: %c\n", arr[4]);//Index 4 is the last cell in the array
    /* It is specific for arrays that the index of n-1 (i.e., size-1)
    is considered as the null character '\0' by default. */

    return 0;
}
