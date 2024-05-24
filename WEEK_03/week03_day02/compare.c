#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    for (int i = 0;; i++)
    {
        if (a[i] > b[i])
        {
            printf("%s", b);
            break;
        }
        else if (a[i] < b[i])
        {
            printf("%s", a);
            break;
        }
        else if (a[i] == '\0' && b[i] == '\0')
        {
            printf("%s", a);
            break;
        }
        else if (a[i]=='\0')
        {
            printf("%s", a);
            break;
        }
        else if (b[i]=='\0')
        {
            printf("%s", b);
            break;
        }


        if (a[i] == b[i])
        {
            continue;
        }
        else if (a[i] > b[i])
        {
            printf("%s", b);
            break;
        }
        else if (a[i] < b[i])
        {
            printf("%s", a);
            break;
        }
    }

    return 0;
}