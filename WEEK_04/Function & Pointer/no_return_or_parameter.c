#include<stdio.h>

void sum(void) //patameter e void likha r khali rakha same e laghtese
{
    int x,y;
    scanf("%d %d", &x, &y);
    int ans = x+y;
    printf("%d", ans);
}
int main()
{
    sum();
    return 0;
}