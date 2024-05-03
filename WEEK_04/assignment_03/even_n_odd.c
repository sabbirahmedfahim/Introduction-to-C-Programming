#include <stdio.h>

void odd_even(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int countEven = 0, countOdd = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            countEven++;
        }
        else if (arr[i] % 2 != 0)
        {
            countOdd++;
        }
    }
    printf("%d %d", countEven, countOdd);
}
int main()
{
    odd_even();

    return 0;
}
