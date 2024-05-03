#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    float div1 = a/b;
    float div2 = (float)a/b;
    printf("%.2f\n%.2f\n", div1, div2);
    
    return 0;
}