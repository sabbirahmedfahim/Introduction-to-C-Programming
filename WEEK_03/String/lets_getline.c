#include<stdio.h>
#include<stdio.h>
int main()
{
    char arr[1000001];
    fgets(arr, 1000001, stdin);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i]=='\\')
        {
            break;
        }
        printf("%c", arr[i]);
        
    }
    
    return 0;
}