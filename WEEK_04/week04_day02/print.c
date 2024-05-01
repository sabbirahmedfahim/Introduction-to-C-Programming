#include<stdio.h>

void sequence(int n)
{
    for (int i = 1; i < n; i++)
    {
        printf("%d ", i);
    }
    printf("%d", n);
    
}
int main()
{
    int n;
    scanf("%d", &n);
    sequence(n);
    
    
    return 0;
}