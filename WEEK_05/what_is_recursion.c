// Recursion is a function that CALLS ITSELF to solve a certain task
//  or smaller instances of that task.

#include <stdio.h>

int k = 0, l=0;
int m, n;
void hey()
{
    if (k < m)
    {
        printf("Hey\n");
        k++;
        hey();
    }
}
void star()
{
    if (l < n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        l++;
        star();
    }
}

int main()
{
    printf("How many HEY?\n");
    scanf("%d", &m);
    printf("How many Star?\n");
    scanf("%d", &n);
    hey();
    star();

    return 0;
}