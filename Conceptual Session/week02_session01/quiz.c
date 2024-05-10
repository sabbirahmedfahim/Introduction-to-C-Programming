#include <stdio.h>
int main()
{
    int n = 10;

    n = n--;
    printf("%d\n", n);

    n = --n;
    printf("%d\n", n);

    int x = 10;
    x--;
    printf("\n%d\n", x);
    --x;
    printf("%d\n", x);

    return 0;
}