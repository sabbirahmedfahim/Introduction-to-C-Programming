#include <stdio.h>
#include <limits.h> //New Library
int main()
{
    // BASIC 
    // range:   0<x<10^8   => __INT_MAX__
    // range: -10^7<x<10^8 => __INT_MIN__ 
    // printf("INT_MAX %d\n", INT_MAX);
    // printf("INT_MIN %d\n", INT_MIN);

    int arr[] = {10, 5, 30, -15, 0, 25, -8};
    // int maxx = INT_MAX; //wrong: THink wHy
    int maxx = INT_MIN;
    int minn = INT_MAX;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > maxx)
        {
            maxx = arr[i];
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] < minn)
        {
            minn = arr[i];
        }
    }
    printf("Maximum: %d\n", maxx);
    printf("Minimum: %d\n", minn);
    return 0;
}