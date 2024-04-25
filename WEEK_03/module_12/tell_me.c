#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int arr[100001];
        int m;
        scanf("%d", &m);
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr[i]);
        }
        int x;
        scanf("%d", &x);
        int flag = 0;
        for (int i = 0; i < m; i++)
        {
            if (arr[i] == x)
            {
                printf("YES\n");
                flag = 1;
                break; // break added because if an element remain two or
                // more times it might be print YES multiple times!
            }
        }
        if (flag == 0)
        {
            printf("NO\n");
        }
    }

    return 0;
}