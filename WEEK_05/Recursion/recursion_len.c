#include <stdio.h>

int len_recursion(char arr[], int i) 
{
    if (arr[i] == '\0') return 0;
    
    return len_recursion(arr, i + 1)+1; //buji nai still
}

int main()
{
    char arr[100] = "hello";
    int ans = len_recursion(arr, 0);
    printf("\n%d", ans);

    return 0;
}