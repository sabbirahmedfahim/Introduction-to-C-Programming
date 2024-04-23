#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        // count[i]++; //here i did the mistake
        count[arr[i]]++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ache %d ta\n", i, count[i]);
    }
    

    return 0;
}

// details
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int count[10] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==0)
//         {
//             count[0]++;
//         }
//         else if (arr[i]==1)
//         {
//             count[1]++;
//         }
//         else if (arr[i]==2)
//         {
//             count[2]++;
//         }
//         else if (arr[i]==3)
//         {
//             count[3]++;
//         }
//         else if (arr[i]==4)
//         {
//             count[4]++;
//         }
//         else if (arr[i]==5)
//         {
//             count[5]++;
//         }
//         else if (arr[i]==6)
//         {
//             count[6]++;
//         }
//         else if (arr[i]==7)
//         {
//             count[7]++;
//         }
//         else if (arr[i]==8)
//         {
//             count[8]++;
//         }
//         else if (arr[i]==9)
//         {
//             count[9]++;
//         }

//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ache %d ta\n", i, count[i]);
//     }

//     return 0;
// }
