#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int countT = 0, countP = 0;
        int len;
        scanf("%d", &len);
        char arr[len]; //length is given so don't estimate
        scanf("%s", &arr);
        
        for (int j = 0; j < len; j++)
        {
            if (arr[j] == 'T')
            {
                countT++;
            }
            else if (arr[j] == 'P')
            {
                countP++;
            }
        }
        if (countP > countT)
        {
            printf("Pathaan\n");
        }
        else if (countP < countT)
        {
            printf("Tiger\n");
        }
        else if (countP==countT)
        {
            printf("Draw\n");
        }
        
    }

    return 0;
}