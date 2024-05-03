#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int spaceCount = n-1;
    int numCount = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j<= spaceCount; j++)
        {
            printf(" ");
        }
        for (int j = numCount; j>= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        spaceCount--;
        numCount++;
        
    }
    
    
    return 0;
}