#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int flag = 0;
    if (row == col)
    {
        printf("Enter the elements:\n");
    }
    else
    {
        flag = 1;
    }

    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        if (flag == 1)
        {
            break;
        }
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }

    int withoutDiagonalElement = (row * col) - row;
    if (count == withoutDiagonalElement)
    {
        printf("Primary Diagonal Matrix!!\n");
    }
    else
    {
        printf("NOT a Diagonal\n");
    }

    return 0;
}