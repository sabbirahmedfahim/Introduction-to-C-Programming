#include <stdio.h>
// summation of maximum k-number elements
// hit the word- Maximum Summation 
int main()
{
    int n, k; 
    scanf("%d %d", &n, &k);
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
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            continue;
        }
        else
        {
            sum += arr[i];
        }
    }
    printf("%lld", sum);

    return 0;
}