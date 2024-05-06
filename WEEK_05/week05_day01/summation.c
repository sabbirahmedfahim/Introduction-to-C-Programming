#include<stdio.h>

long long int print(int arr[], int n, int i)
{
    if (n==i) return 0;

    return print(arr, n, i+1)+arr[i];
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
    printf("%lld", print(arr, n, 0));
    return 0;
}