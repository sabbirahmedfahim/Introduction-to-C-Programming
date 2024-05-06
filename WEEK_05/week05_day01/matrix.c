#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d", &row);
    col = row;

    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }

    long long int sumOfPrimaryDiagonal = 0;
    long long int sumOfSecondaryDiagonal = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sumOfPrimaryDiagonal += arr[i][j];
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == row - 1)
            {
                sumOfSecondaryDiagonal += arr[i][j];
            }
        }
    }

    long long int differece = sumOfPrimaryDiagonal-sumOfSecondaryDiagonal;
    if (differece < 0)
    {
        differece *= -1;
    }

    printf("%lld", differece);

    return 0;
}