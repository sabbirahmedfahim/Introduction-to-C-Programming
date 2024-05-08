#include<stdio.h>

int maxx_num(int arr[], int n, int i, int maxx)
{
    if (i==n) return maxx;
    if (arr[i]>maxx)
    {
        maxx = arr[i];
    }  
    return maxx_num(arr, n, i+1, maxx);
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
    printf("%d", maxx_num(arr, n, 0, arr[0]));
    
    return 0;
}