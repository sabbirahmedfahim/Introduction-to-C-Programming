#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x = (n * 2) - 1;
    int spaceCount = n - 1;
    int numCount = 1;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < spaceCount; j++)
        {
            printf(" ");
        }
        for (int j = numCount; j >= 1; j -= 1)
        {
            printf("%d", j);
        }
        printf("\n");
        if (i < n)
        {
            spaceCount--;
            numCount += 2;
        }
        else
        {
            spaceCount++;
            numCount -= 2;
        }
    }
    return 0;
}

// Another way [long process]
// #include <stdio.h>

// int main()
// {
//     // Right code, but I'm escaping from larger code. Make it simple, clean :)
//     int n;
//     scanf("%d", &n);

//     int spaceCount = n - 1;
//     int numCount = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < spaceCount; j++)
//         {
//             printf(" ");
//         }
//         for (int j = numCount; j >= 1; j -= 1)
//         {
//             printf("%d", j);
//         }
//         if (i != n)
//         {
//             printf("\n");
//         }

//         spaceCount--;
//         numCount += 2;
//     }

//     spaceCount = 1;
//     numCount = (n * 2) - 1;
//     numCount -= 2;

//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 0; j < spaceCount; j++)
//         {
//             printf(" ");
//         }
//         for (int j = numCount; j >= 1; j -= 1)
//         {
//             printf("%d", j);
//         }
//         if (i != n-2) // Quiz: why I used n-2 rather than n-1?
//         {
//             printf("\n");
//         }
//         spaceCount++;
//         numCount -= 2;
//     }

//     return 0;
// }