#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int spaceCount = n-1;
    int starCount = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spaceCount; j++)
        {
            printf(" ");
        }
        spaceCount -= 1;
        
        for (int j = 1; j <= starCount; j++)
        {
            printf("*");
        }
        starCount = starCount+2;

        printf("\n");
        
    }

    return 0;
}