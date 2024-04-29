#include <stdio.h>

int starpattern(int n)
{
    int spaceCount = n - 1;
    int starCount = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spaceCount; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= starCount; j++)
        {
            printf("*");
        }
        printf("\n");
        spaceCount--;
        starCount += 2;
    }

}
int RevStarPattern(int n)
{
    int spaceCount = 0;
    int starCount = (n*2)-1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spaceCount; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= starCount; j++)
        {
            printf("*");
        }
        printf("\n");
        spaceCount++;
        starCount -= 2;
    }

}

int main()
{
    int n;
    scanf("%d", &n);
    starpattern(n);
    RevStarPattern(n);

    return 0;
}