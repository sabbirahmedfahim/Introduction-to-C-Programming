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

    int maxx = arr[0], minn = arr[0];
    int indxOfMax = 0, indxOfMin = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxx)
        {
            maxx = arr[i];
            indxOfMax = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minn)
        {
            minn = arr[i];
            indxOfMin = i;
        }
    }
    int temp = arr[indxOfMax];
    arr[indxOfMax] = arr[indxOfMin];
    arr[indxOfMin] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}