// copy elements of two arrays 
#include <stdio.h>
int main()
{
    int m, n;
    // int arr1[m]; //mistake
    scanf("%d", &m);
    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    scanf("%d", &n);
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]); 
    }

    int arr3[m + n];
    for (int i = 0; i < m; i++)
    {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < m+n; i++)
    {
        arr3[m+i] = arr2[i];
    }

    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}