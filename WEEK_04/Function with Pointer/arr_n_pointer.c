#include <stdio.h>

// void arr_n_pointer_callBy_Value(int *arr, int n) //wrong
// lession: when we pass array, we pass the address of the array

// void arr_n_pointer_callBy_Ref_One(int arr[], int n) //another way
void arr_n_pointer_callBy_Ref_One(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Value of %d index: %d\n", i, arr[i]);
    }
    printf("\n");
}
void arr_n_pointer_callBy_Ref_Two(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Address of %d index: %p\n", i, arr+i);
    }
    printf("\n");
}

int main()
{
    int arr[5] = {100, 20, 30, 40, 50};

    // arr_n_pointer(&arr[5]); //wrong process
    // arr_n_pointer(&arr, 5); // don't need to add &, it already started taking address
    arr_n_pointer_callBy_Ref_One(arr, 5);
    arr_n_pointer_callBy_Ref_Two(arr, 5);

    printf("Address of 0 index:\n");
    // printf("%p ", &arr);
    printf("%p\n", arr);       // it works without adding &
    printf("%p\n\n", &arr[0]); // proved that: arr==arr[0]

    printf("0 index in:\ninteger format: %d\n", arr); // Think
    printf("Pointer format: %p\n\n", arr);

    printf("Value of 0 index:\n");
    printf("%d ", *arr);   // it's the goal
    printf("%d\n", arr[0]); // proved that: arr==arr[0]

    printf("Value of 1 index:\n");
    printf("%d ", *(arr + 1)); // THink
    printf("%d ", *(1 + arr));
    printf("%d ", arr[1]);
    printf("%d \n", 1 [arr]); // THink 2.0

    // lession 1: arr[1] means *(arr+1), which  also == to 1[arr]
    // lession 2: array is one kind of pointer

    return 0;
}