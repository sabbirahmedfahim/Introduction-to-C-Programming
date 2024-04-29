#include<stdio.h>

int char_to_ascii(char a)
{
    printf("%d", a);
}
int main()
{
    char a;
    scanf("%c", &a);
    char_to_ascii(a);
    
    return 0;
}