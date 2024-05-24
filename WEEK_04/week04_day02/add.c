#include <stdio.h>
void sum(int a, int b)
{
    scanf("%d %d", &a, &b);
    long long int sum = a + b;
    printf("%lld", sum);
}
int main() 
{
    int a, b;

    sum(a, b);

    return 0;
}