// ONE way (easiest)
#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[1001];
    scanf("%s", &arr1);
    int flag = 0;
    int len = strlen(arr1) - 1;

    for (int i = 0; i < strlen(arr1); i++)
    {
        if (arr1[i] != arr1[len])
        {
            flag = 1;
        }
        len--;
    }
    if (flag == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

// TWO way (for strong basic) 
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char arr1[1001];
//     char arr2[1001];
//     scanf("%s", &arr1);
//     strcpy(arr2, arr1);
//     int flag = 0;
//     int len = strlen(arr1) - 1;
//     for (int i = 0; i < strlen(arr1); i++)
//     {
//         arr2[len] = arr1[i];
//         len--;
//     }
//     for (int i = 0; i < strlen(arr1); i++)
//     {
//         if (arr1[i] != arr2[i])
//         {
//             flag = 1;
//         }
//     }
//     if (flag == 0)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }

//     return 0;
// }
