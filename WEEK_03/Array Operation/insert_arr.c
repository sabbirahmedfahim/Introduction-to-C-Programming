// Super-Dupper important code 

// #ONE 
// #include <stdio.h>
// int main()
// {
//     int arr[5] = {4, 34, 5, 86};
//     // insert 999 in 1 index

//     for (int i = 4; i >= 1; i--)
//     {
//         arr[i] = arr[i-1];
//         // int temp = arr[i];
//         // arr[i + 1] = temp;
//     }
//     arr[1] = 999;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

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
    printf("Index of array u want to add: \n");
    int indxx, value;
    scanf("%d", &indxx);
    printf("Value of array u want to add: \n");
    scanf("%d", &value);

    n = n+1;
    // printf("%d\n",n);

    for (int i = n; i > indxx; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[indxx] = value;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}