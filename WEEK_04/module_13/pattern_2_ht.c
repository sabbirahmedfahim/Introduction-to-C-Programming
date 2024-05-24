#include <stdio.h>
int main()
{
    int n; 
    scanf("%d", &n);
    int spaceCount = 0;
    // int starCount = n-2;
    int starCount = n*2-1;
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spaceCount; j++)
        {
            printf(" ");
        }
        spaceCount += 1;
        
        for (int j = starCount; j >= 1; j--)
        {
            printf("*");
        }
        starCount = starCount-2;

        printf("\n");
        
    }

    return 0;
}