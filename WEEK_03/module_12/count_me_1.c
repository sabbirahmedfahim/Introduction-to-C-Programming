    #include <stdio.h>
    int main()
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int countDivBy2 = 0;
        int countDivBy3 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                countDivBy2++;
            }
            else if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
            {
                countDivBy2++;
            }
            else if (arr[i] % 3 == 0)
            {
                countDivBy3++;
            }
            }

        printf("%d %d", countDivBy2, countDivBy3);

        return 0;
    }