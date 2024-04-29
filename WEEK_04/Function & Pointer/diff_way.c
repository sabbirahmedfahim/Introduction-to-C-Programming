#include<stdio.h>

int twoXvalue (int a);

int main()
{
    int a;
    scanf("%d", &a);
    int ans = twoXvalue(a);
    printf("%d", ans);
    
    return 0;
}
int twoXvalue (int a)
{
    int n = 2*a;
    return n;
}