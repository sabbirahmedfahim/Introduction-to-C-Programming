#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char arr[10001];
    for (int i = 0; i < n; i++)
    {
        int capitalAlphabet = 0, smallAlphabet = 0, digit = 0;
        scanf("%s", arr);
        for (int i = 0; i < strlen(arr); i++)
        {
            if (arr[i] >= 'A' && arr[i] <= 'Z')
            {
                capitalAlphabet++;
            }
            else if (arr[i] >= 'a' && arr[i] <= 'z')
            {
                smallAlphabet++;
            }
            else if (arr[i] >= '0' && arr[i] <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n", capitalAlphabet, smallAlphabet, digit);
    }

    return 0;
}