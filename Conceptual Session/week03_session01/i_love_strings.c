#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int z = 0; z < n; z++)
    {
        char arr1[101];
        char arr2[101];
        scanf("%s %s", &arr1, &arr2);
        int len;
        if (strlen(arr1) >= strlen(arr2))
        {
            len = strlen(arr1);
        }
        else
        {
            len = strlen(arr2);
        }

        for (int i = 0; i < len; i++)
        {
            if (i < strlen(arr1))
            {
                printf("%c", arr1[i]);
            }

            if (i < strlen(arr2))
            {
                printf("%c", arr2[i]);
            }
        }
        printf("\n");
    }

    return 0;
}