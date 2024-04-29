#include<stdio.h>

char small_to_capital(char a)
{
    printf("%c", a-32);
}
int main()
{
    char a;
    scanf("%c", &a);
    small_to_capital(a);
    
    return 0;
}        