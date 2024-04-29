#include <stdio.h>

int sum(int a, int b)
{
    int ans = a + b;
    return ans;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sum(a, b));

    return 0;
}