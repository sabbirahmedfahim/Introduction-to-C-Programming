#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int upperTreeStars = n + 10;
    int oddCount = 0;
    for (int i = 3; i <= n; i += 2)
    {
        if (i % 2 == 1)
        {
            oddCount++;
        }
    }
    oddCount = oddCount + 6;
    int spaceCount = upperTreeStars - 1;
    spaceCount = spaceCount / 2;

    for (int i = 0; i < spaceCount + 1; i++)
    {
        for (int j = i; j < spaceCount; j++)
        {
            printf(" ");
        }
        for (int j = (i * 2) + 1; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int z = 0; z < n; z++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}