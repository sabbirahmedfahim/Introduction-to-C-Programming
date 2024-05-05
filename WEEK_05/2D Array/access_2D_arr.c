#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter row:\n");
    scanf("%d", &row);
    printf("Enter column:\n");
    scanf("%d", &col);

    printf("Elements of %dx%d matrix:\n", row, col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // exact row 
    printf("Send us ur desired row:\n");
    int m;
    scanf("%d", &m);
    m--;
    for (int i = 0; i < col; i++)
    {
        printf("%d ", arr[m][i]);
    }

    // exact column 
    printf("\nSend us ur desired column:\n");
    int n;
    scanf("%d", &n);
    n--;
    for (int i = 0; i < row; i++)
    {
        printf("%d\n", arr[i][n]);
    }

    return 0;
}