
#include <stdio.h>

int main()
{
 
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        do
        {
            printf("%d ", m % 10);
            m = m / 10;
        } while (m != 0);
        printf("\n");
    }

    return 0;
}