
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int leftMost = n % 10;
    int rightMost = n / 10;
    if (leftMost % rightMost == 0 || rightMost % leftMost == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}