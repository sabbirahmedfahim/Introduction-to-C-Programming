
#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("-1");
    }

    return 0;
}