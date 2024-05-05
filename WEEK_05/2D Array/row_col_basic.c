#include <stdio.h>
int main()
{
    int arr[4][5];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            printf("%d \n", arr[i][j]);
        }
    }

    return 0;
}