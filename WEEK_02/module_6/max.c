#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int maxx = 0;
    int numm;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numm);
        if (maxx<numm)
        {
            maxx = numm;
        }
    }
    printf("%d", maxx);

   return 0;
}