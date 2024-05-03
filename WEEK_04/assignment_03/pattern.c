#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int spaceCount = n - 1;
    int starCount = 1;
    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= spaceCount; j++)
            {
                printf(" ");
            }

            for (int j = 1; j <= starCount; j++)
            {
                printf("-");
            }
            if (i <= n - 1)
            {
                spaceCount--;
                starCount += 2;
            }
            else
            {
                spaceCount++;
                starCount -= 2;
            }
        }

        else
        {
            for (int j = 1; j <= spaceCount; j++)
            {
                printf(" ");
            }

            for (int j = 1; j <= starCount; j++)
            {
                printf("#");
            }
            if (i <= n - 1)
            {
                spaceCount--;
                starCount += 2;
            }
            else
            {
                spaceCount++;
                starCount -= 2;
            }
        }

        printf("\n");
    }

    return 0;
}
