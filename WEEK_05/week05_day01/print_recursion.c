#include<stdio.h>

void print(int n, int i)
{
    if (i>n) return;   
    printf("I love Recursion\n");
    print(n, i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n, 1);

    return 0;
}