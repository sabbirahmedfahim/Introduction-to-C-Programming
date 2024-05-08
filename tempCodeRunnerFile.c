#include <stdio.h>

void print_digit(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    while (arr[i] != 0)
    {
        printf("%d ", arr[i] % 10);
        arr[i] /= 10;
    }
    printf("\n");
    print_digit(arr, n, i + 1);
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
    print_digit(arr, n, 0);

    return 0;
}
