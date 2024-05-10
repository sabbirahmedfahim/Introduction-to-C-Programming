#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n == 5665)
        {
            printf("CORRECT\n");
            break;
        }
        else
        {
            printf("WRONG\n");
        }
    }

    return 0;
}