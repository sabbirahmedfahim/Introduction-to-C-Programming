#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter row:\n");
    scanf("%d", &row);
    printf("Enter column:\n");
    scanf("%d", &col);

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
            if (i == j && arr[i][j] == 1)
            {
                continue;
            }
            else if (i == j && arr[i][j] != 1)
            {
                flag = 1;
            }
            else if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }

    int withoutUnitElement = (row * col) - row;
    if (flag == 0 && count == withoutUnitElement)
    {
        printf("Unit Matrix!!\n");
    }
    else
    {
        printf("NOT a Unit\n");
    }

    return 0;
}