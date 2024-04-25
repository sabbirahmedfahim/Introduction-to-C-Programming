#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000000];
    scanf("%s", arr);
    int leng = strlen(arr);

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' ||
                arr[i] == 'o' || arr[i] == 'u')
            {
                leng--;
            }
        }
    }
    printf("%d", leng);
    return 0;
}