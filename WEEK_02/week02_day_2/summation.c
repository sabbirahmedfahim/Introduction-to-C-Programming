// read limit first

    #include <stdio.h>
    int main()
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        long long int sum = 0;

        for (long long int  i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        for (long long int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }

        if (sum<0)
        {
            sum = sum*(-1);
            printf("%lld", sum);
        }
        else
        {
            printf("%lld", sum);
        }
        
        

        return 0;
    }