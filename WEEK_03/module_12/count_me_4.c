#include<stdio.h>
int main()
{
    char arr[10001];
    scanf("%s", arr);
    int count[26]= {0};
    for (int i = 0; arr[i]!='\0'; i++)
    {
        count[arr[i]-97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i]!=0)
        {
            printf("%c - %d\n", i+97, count[i]);
        }
    }
    
    
    return 0;
}