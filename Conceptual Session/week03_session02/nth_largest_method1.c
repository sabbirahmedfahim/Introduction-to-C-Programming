// my own thinking(code) [using sorting algorithm]
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
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int count = 0;
    int nTH_index;
    printf("nTH largest number serial? [from 1]\n");
    scanf("%d", &nTH_index);
    nTH_index--;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[count])
        {
            count++;
            arr[count] = arr[i];
        }
        if (count == nTH_index)
        {
            break;
        }
    }

    printf("%d No. largeset num is %d", count+1, arr[count]);

    return 0;
}