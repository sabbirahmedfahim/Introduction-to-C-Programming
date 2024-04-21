#include<stdio.h>
int main()
{
    // ascii value
    char arr[1000001];
    scanf("%s", arr);
    int count = 0;
    for (int i = 0; arr[i]!='\0'; i++)
    {
        count = count + arr[i] - 48;
    }
    printf("%d", count);
    return 0;
}


// Another wayy
// #include<stdio.h>
// int main()
// {
//     char arr[1000001];
//     scanf("%s", &arr);
//     int count = 0;
//     for (int i = 0; arr[i]!='\0'; i++)
//     {
//         if (arr[i]=='1')
//         {
//             arr[i] = 1;
//         }
//         else if (arr[i]=='2')
//         {
//             arr[i] = 2;
//         }
//         else if (arr[i]=='3')
//         {
//             arr[i] = 3;
//         }
//         else if (arr[i]=='4')
//         {
//             arr[i] = 4;
//         }
//         else if (arr[i]=='5')
//         {
//             arr[i] = 5;
//         }
//         else if (arr[i]=='6')
//         {
//             arr[i] = 6;
//         }
//         else if (arr[i]=='7')
//         {
//             arr[i] = 7;
//         }
//         else if (arr[i]=='8')
//         {
//             arr[i] = 8;
//         }
//         else if (arr[i]=='9')
//         {
//             arr[i] = 9;
//         }
//         else 
//         {
//             arr[i] = 0;
//         }
        
        
//         count = count + arr[i];
//     }
//     printf("%d", count);
    
    
//     return 0;
// }