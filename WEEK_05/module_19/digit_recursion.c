// ONE
// wanna fix my own code [update: Fixed by Phitron]
#include <stdio.h>

void print_digit(int arr[], int n, int i)
{

    if (i == n)
    {
        return;
    }
    int count = 0;
    int digitss[10];
    if (arr[i] == 0)
    {
        printf("0");
    }
    else
    {
        while (arr[i] != 0)
        {
            int digit = arr[i] % 10;
            digitss[count++] = digit; // digit & digitss are two different variables
            arr[i] /= 10;
        }
        for (int j = count - 1; j >= 0; j--)
        {
            printf("%d", digitss[j]);
            if (j > 0)
            {
                printf(" ");
            }
        }
    }
    printf("\n");
    print_digit(arr, n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    print_digit(arr, n, 0);

    return 0;
}

// TWO
// my initial /inaccurate code/ which was corrected later
// #include <stdio.h>

// void print_digit(int arr[], int n, int i)
// {
//     if (i == n)
//     {
//         return;
//     }
//     while (arr[i] != 0)
//     {
//         printf("%d ", arr[i] % 10);
//         arr[i] /= 10;
//     }
//     printf("\n");
//     print_digit(arr, n, i + 1);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     print_digit(arr, n, 0);

//     return 0;
// }

// THREE
// idea copied from instructor
// #include <stdio.h>

// void print_digit(int n)
// {
//     if (n == 0)
//         return;
//     print_digit(n / 10);
//     printf("%d ", n % 10);
// }
// int main()
// {
//     int testCase;
//     scanf("%d", &testCase);
//     for (int i = 0; i < testCase; i++)
//     {
//         int n;
//         scanf("%d", &n);
//         print_digit(n);
//         if (n == 0)
//         {
//             printf("0");
//         }
//         printf("\n");
//     }

//     return 0;
// }