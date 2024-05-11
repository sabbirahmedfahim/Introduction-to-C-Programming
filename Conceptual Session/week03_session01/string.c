#include <stdio.h>
int main()
{
    // char arr[5];
    char arr[6]; // Array of size 6 (can hold 5 characters + null terminator)
    arr[0] = 'H';
    arr[1] = 'e';
    arr[2] = 'l';
    // arr[3] = '\0'; // Setting arr[3] to '\0' would terminate the string here
    arr[3] = 'l';
    arr[4] = 'o';
    // arr[5] = '\0'; // if i need i can assign, no need actually

    printf("%d\n", sizeof(arr) / sizeof(arr[0]));
    printf("%s\n", arr);
    printf("%s\n", arr[5]);

    return 0;
}