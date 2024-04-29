#include<stdio.h>

char capital_to_small(char a)
{
    printf("%c", a+32);
}
int main()
{
    char a;
    scanf("%c", &a);
    capital_to_small(a);
    
    return 0;
}        