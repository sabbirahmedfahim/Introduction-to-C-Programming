#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[1001];
    for (int i = 0; i < n; i++)
    {
        int m1 = 0, m2 = 0, day = 0;
        scanf("%d %d %d", &m1, &m2, &day);
        int totalDays = (m1 * day) / (m1 + m2);
        arr[i] = day - totalDays;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}