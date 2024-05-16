// Frequency/Counting Array[without using sorting algorithm] 

#include <stdio.h>
int main()
{
    // taking input
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // largest value
    int largestValue = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largestValue)
        {
            largestValue = arr[i];
        }
    }

    // NO NEED to use 'Sorting Array method'

    // frequency array
    int frequencyArr[largestValue + 1];
    // let value is 10, then index 10, so size in index+1, clear?

    for (int i = 0; i <= largestValue; i++)
    {
        frequencyArr[i] = 0;
    }
    for (int i = 0; i < n; i++) // Quiz1: wHy 'n' instead of 'largestValue'?
    {
        frequencyArr[arr[i]] += 1;
    }
    
    //Please comment out the code & run for better understanding
    // for (int i = 0; i <= largestValue; i++) //Quiz2: wHy 'largestValue' instead of 'n'?
    // {
    //     printf("%d - %d ta\n", i, frequencyArr[i]);
    // }
    // printf("\n");

    // counting array
    int duplicate_value = 0;
    int unique_value = 0;

    for (int i = largestValue; i >= 0; i--)
    {
        if (frequencyArr[i] > 1)
        {
            duplicate_value++;
        }
        if (frequencyArr[i] == 1)
        {
            unique_value++;
        }
    }
    printf("duplicate value: %d\n", duplicate_value);
    printf("unique value: %d\n", unique_value);

    return 0;
}