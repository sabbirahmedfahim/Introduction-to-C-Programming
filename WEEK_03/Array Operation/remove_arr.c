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
    printf("Index of array u want to remove: \n");
    int indxx;
    scanf("%d", &indxx);

    n = n-1;

    for (int i = indxx; i < n; i++)
    {
        arr[i] = arr[i+1];

    }
    // for (int i = 0; i < n+1; i++) 
    //run to see extra one element remain in memory
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}