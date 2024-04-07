// core consept: ASCCI value
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch>='A' && ch<='Z')
    {
        printf("%c", ch+32);
    } else if (ch>='a' && ch<='z')
    {
        printf("%c", ch-32);
    }

    // char cha = 'a'; printf("%d\n", cha); //CONSEPT
    // char chhh = 'A'; printf("%d", chhh); 

    return 0;
}
