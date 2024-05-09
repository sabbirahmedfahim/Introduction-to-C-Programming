#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    for (int z = 0; z < testCase; z++)
    {
        int n;
        scanf("%d", &n);
        int arr1[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
            arr2[i] = arr1[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr2[i] > arr2[j])
                {
                    int temp = arr2[j];
                    arr2[j] = arr2[i];
                    arr2[i] = temp;
                }
            }
        }
        int arr3[n];
        for (int i = 0; i < n; i++)
        {
            arr3[i] = abs(arr1[i] - arr2[i]);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr3[i]);
        }
        printf("\n");
    }

    return 0;
}