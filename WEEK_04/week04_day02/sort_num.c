#include <stdio.h>

void sort_num(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n = 3;
    int arr[n];
    int arr_duplicate[n];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr_duplicate[i] = arr[i];
    }

    sort_num(arr, 3);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr_duplicate[i]);
    }

    return 0;
}