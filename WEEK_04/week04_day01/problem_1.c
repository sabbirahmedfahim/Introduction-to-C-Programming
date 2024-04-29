#include<stdio.h>
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
        for (int j = 1; j <= starCount; j++)
        {
            printf("*");
        }
        printf("\n");
        spaceCount--;
        starCount++;
        
    }
    
    
    return 0;
}