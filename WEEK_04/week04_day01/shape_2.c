#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int starCount = 1;
    int spaceCount = n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < spaceCount; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < starCount; j++)
        {
            printf("*");
        }
        printf("\n");
        spaceCount--;
        starCount += 2;
    }

    return 0;
}