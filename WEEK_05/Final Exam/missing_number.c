#include <stdio.h>
int main()
{
    int testCase;
    scanf("%d", &testCase);
    for (int z = 0; z < testCase; z++)
    {
        int n = 4;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        long long int AxBxC = arr[1] * arr[2] * arr[3];
        long long int ans;
        int flag = 0;
        if (arr[0] % AxBxC == 0)
        {
            ans = arr[0] / AxBxC;
        }
        else
        {
            flag = 1;
        }

        if (arr[0] == 0)
        {
            printf("0\n");
        }
        else if (flag == 0)
        {
            printf("%lld\n", ans);
        }
        else
        {
            printf("-1\n");
        }
        
        
    }

    return 0;
}