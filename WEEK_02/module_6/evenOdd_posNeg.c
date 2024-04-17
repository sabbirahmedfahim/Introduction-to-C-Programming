
#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int even = 0, odd = 0, positive = 0, negative = 0;
    int j;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &j);
        if (j % 2 == 0 || j % 2 != 0)
        {
            if (j % 2 == 0)
            {
                even++;
            }
            else if (j % 2 != 0)
            {
                odd++;
            }
        }
        if (j > 0 || j < 0)
        {
            if (j > 0)
            {
                positive++;
            }
            else if (j < 0)
            {
                negative++;
            }
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}