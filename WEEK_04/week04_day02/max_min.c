#include <stdio.h>

void maxx(int arr[], int n)
{
    int maxx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxx)
        {
            maxx = arr[i];
        }
    }
    printf("%d ", maxx);
}
void minn(int arr[], int n)
{
    int minn = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minn)
        {
            minn = arr[i];
        }
    }
    printf("%d ", minn);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    minn(arr, n);
    maxx(arr, n);
    

    return 0;
}