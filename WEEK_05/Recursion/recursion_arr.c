#include <stdio.h>

void len_recursion(int arr[], int n, int i)
{
    // if (arr[i] == n) return; //wrong
    if (i == n) return;
    printf("%d ", arr[i]);
    len_recursion(arr, n, i + 1);
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
    len_recursion(arr, n, 0);

    return 0;
}