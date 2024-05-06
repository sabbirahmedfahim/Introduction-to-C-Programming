    #include<stdio.h>

    void print(int arr[], int n, int i)
    {
        if (n==i) return;
        print(arr, n, i+1);
        if (i%2==0)
        {
            printf("%d ", arr[i]);
        }
    }
    int main()
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        print(arr, n, 0);

        return 0;
    }