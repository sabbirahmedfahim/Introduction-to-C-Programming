#include <stdio.h>
#include<string.h>
int is_palindrome(char *arr)
{
    int len = strlen(arr);
    int temp = len;
    int flag = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == arr[temp - 1])
        {
            temp--;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}
int main()
{
    char arr[1001];
    scanf("%s", &arr);
    int ans = is_palindrome(arr);
    if (ans == 0)
    {
        printf("Not Palindrome");
    }
    else if (ans == 1)
    {
        printf("Palindrome");
    }

    return 0;
}