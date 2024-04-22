
#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int aMinusb = a - b;
    if (aMinusb >= 0)
    {
        printf("%d", aMinusb);
    }
    else
    {
        printf("0");
    }

    return 0;
}