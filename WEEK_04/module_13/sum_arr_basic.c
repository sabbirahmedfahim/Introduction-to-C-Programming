#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n-1; i++) //notice: n-1
    {
        for (int j = i + 1; j < n; j++) //j<n
        {
            printf("%d %d\n", i, j);
        }
        printf("\n");
        for (int j = i+1; j < n; j++)
        {
            printf("%d %d\n", arr[i], arr[j]);
        }
        
    }

    return 0;
}