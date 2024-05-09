#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 0;
    if (row != col)
    {
        flag = 1;
    }

    // checking primary diagonal
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j && arr[i][j] != 1)
            {
                flag = 1;
            }
        }
    }
    // checking secondary diagonal
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (i + j == row - 1 && arr[i][j] != 1)
            {
                flag = 1;
            }
        }
    }

    // checking remaining elements
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i != j && arr[i][j] == 0)
            {
                continue;
            }
            else if (i + j != row - 1 && arr[i][j] == 0)
            {
                continue;
            }
            else if (i != j)
            {
                if (arr[i][j] == 0)
                {
                    continue;
                }
                else if (arr[i] != 0 && i + j != row - 1)
                {
                    flag = 1;
                }
            }
        }
    }

    if (flag == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}