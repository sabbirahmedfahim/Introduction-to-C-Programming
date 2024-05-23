#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int spaceCount = n - 1;
    int dotCount = 1;
    int hashCount = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < spaceCount; j++)
        {
            printf(" ");
        }
        if (i % 2 == 0)
        {
            for (int j = 0; j < dotCount; j += 2)
            {
                printf(".");
            }
        }
        else
        {
            for (int j = 0; j < hashCount; j += 2)
            {
                printf("#");
            }
        }
        printf("\n");
        
        spaceCount--;
        dotCount += 2;
        hashCount += 2;
    }

    return 0;
}