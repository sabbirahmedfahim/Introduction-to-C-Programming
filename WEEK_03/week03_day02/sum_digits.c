#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char arr[1000001]; //highest size of char in c is: 10^6 ***v.v.i
    scanf("%s", &arr);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '1')
        {
            sum += 1;
        }
        else if (arr[i] == '2')
        {
            sum += 2;
        }
        else if (arr[i] == '3')
        {
            sum += 3;
        }
        else if (arr[i] == '4')
        {
            sum += 4;
        }
        else if (arr[i] == '5')
        {
            sum += 5;
        }
        else if (arr[i] == '6')
        {
            sum += 6;
        }
        else if (arr[i] == '7')
        {
            sum += 7;
        }
        else if (arr[i] == '8')
        {
            sum += 8;
        }
        else if (arr[i] == '9')
        {
            sum += 9;
        }
    }
    printf("%d", sum);

    return 0;
}