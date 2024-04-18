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

    int sumOfPos = 0;
    int sumOfNeg = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sumOfPos = sumOfPos + arr[i];
        }
        else if (arr[i] < 0)
        {
            sumOfNeg = sumOfNeg + arr[i];
        }
    }
    printf("%d %d", sumOfPos, sumOfNeg);

    return 0;
}