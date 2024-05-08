// arr nimu
// min nimu
// min count kormu
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
    int target_minn;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            target_minn = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[target_minn])
        {
            target_minn = i; // think different
        }
    }
    int lowest_minn_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[target_minn] == arr[i])
        {
            lowest_minn_count++;
        }
    }

    if (lowest_minn_count % 2 == 1)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}