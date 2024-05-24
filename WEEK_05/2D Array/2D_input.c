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
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}