#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter row:\n");
    scanf("%d", &row);
    printf("Enter column:\n");
    scanf("%d", &col);

    printf("Elements of %dx%d matrix: %d\n", row, col, row * col);

    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
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
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (count == row * col)
    {
        printf("NULL Matrix Detected!\n");
    }
    else
    {
        printf("NOT a NULL Matrix\n");
    }

    return 0;
}