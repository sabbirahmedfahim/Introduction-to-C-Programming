#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1001];
    scanf("%s", &arr);
    int len = strlen(arr);
    char arrRev[1001];

    int j = len - 1;
    int flag = 0;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] != arr[j])
        {
            flag = 1;
        }
        j--;
    }

    if (flag == 0)
    {
        printf("YES");
    }
    else if (flag == 1)
    {
        printf("NO");
    }

    return 0;
}