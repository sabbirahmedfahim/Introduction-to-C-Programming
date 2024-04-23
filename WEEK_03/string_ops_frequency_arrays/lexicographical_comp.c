// Lexicographical Comparison
// it's just a logic/basic, i will simply use strcmp()

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
            printf("b is smaller");
            break;
        }
        else if (a[i] < b[i])
        {
            printf("a is smaller");
            break;
        }
        else
        {
            if (strlen(a) == strlen(b))
            {
                printf("a and b are same");
                break;
            }
            else if (strlen(a) > strlen(b))
            {
                printf("a is smaller");
                break;
            }
            else if (strlen(a) < strlen(b))
            {
                printf("b is smaller");
                break;
            }
        }
    }

    return 0;
}