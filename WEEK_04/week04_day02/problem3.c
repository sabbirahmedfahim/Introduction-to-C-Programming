#include<stdio.h>

int my_odd(int arr[], int n)
{
    int count_odd = 0;
    for (int i = 0; i<n; i++)
    {
        if (arr[i]%2!=0)
        {
            count_odd++;
        }
        
    }
    // printf("%d", count_odd);
    return count_odd;
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
    
    printf("%d", my_odd(arr, n));
    
    return 0;
}