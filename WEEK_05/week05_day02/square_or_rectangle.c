#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr1[i], &arr2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arr2[i])
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}