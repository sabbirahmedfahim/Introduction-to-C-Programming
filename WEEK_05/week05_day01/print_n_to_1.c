#include <stdio.h>

void print(int n, int i)
{
    if (i > n)
        return;
    print(n, i + 1);
    if (i<=n && i!=1)
    {
        printf("%d ", i);
    }
    else if (i==1)
    {
        printf("%d", i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n, 1);

    return 0;
}