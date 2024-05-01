#include<stdio.h>

void func_n_array(int arr[], int n) //assinged array size
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}
int main()
{
    int arr[5] = {100, 20, 30, 40, 50};
    func_n_array(arr, 5);
    
    return 0;
}