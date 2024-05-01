#include<stdio.h>

int my_len(char n[])
{
    int count = 0;
    for (int i = 0; n[i]!='\0'; i++)
    {
        count++;
    }
    // printf("%d", count);
    return count;
}
int main()
{
    char n[100];
    scanf("%s", &n);
    printf("%d", my_len(n));
    
    return 0;
}