#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char arr[101];

    for (int i = 0; i < n; i++)
    {
        char arr[101];
        scanf("%s", arr);
        if (strlen(arr) <= 10)
        {
            printf("%s\n", arr);
        }
        else if (strlen(arr) > 10)
        {
            char firstCh = arr[0];
            int middleLen = strlen(arr)-2;
            char lastCh = arr[strlen(arr) - 1];
            printf("%c", firstCh);
            printf("%d", middleLen);
            printf("%c\n", lastCh);
        }
    }

    return 0;
}
