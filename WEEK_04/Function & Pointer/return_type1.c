#include <stdio.h>

int sum(int x, int y)
{
    int ans = x + y;
    printf("%d", ans);
    // return 0; //see magic
    return ans;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sum(a, b));

    return 0;
}