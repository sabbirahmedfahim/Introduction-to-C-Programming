#include<stdio.h>

void sum(void) 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}
int main()
{
    sum();
    return 0;
}