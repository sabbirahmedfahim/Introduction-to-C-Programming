#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    char arr1[a + 10];

    getchar();
    fgets(arr1, sizeof(arr1) / sizeof(char), stdin);
    scanf("%d", &b);
    char arr2[b + 10];
    getchar();
    fgets(arr2, sizeof(arr2) / sizeof(char), stdin);

    printf("%s %s", arr1, arr2);
    return 0;
}
