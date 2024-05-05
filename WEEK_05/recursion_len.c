#include <stdio.h>

int len_recursion(char arr[], int i) // int returns length of string
{
    if (arr[i] == '\0') return 0;
    // int len = len_recursion(arr, i + 1)+1;
    printf("%d ", i);
    return len_recursion(arr, i + 1)+1;
}

int main()
{
    char arr[100] = "hello";
    int ans = len_recursion(arr, 0);
    printf("%d", ans);

    return 0;
}