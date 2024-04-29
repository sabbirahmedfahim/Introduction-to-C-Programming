#include <stdio.h>

int sum()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", x + y);
    return 0;
}
int main()
{
    sum();
    sum();
    sum();

    return 0;
}