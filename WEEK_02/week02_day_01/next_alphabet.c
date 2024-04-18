
#include <stdio.h>

int main()
{

    char ch;
    scanf("%c", &ch);
    if (ch == 'z')
    {
        ch = 'a';
    }
    else if (ch >= 'a' && ch <= 'y')
    {
        ch++;
    }

    printf("%c", ch);

    return 0;
}