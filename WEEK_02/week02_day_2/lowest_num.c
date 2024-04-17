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
    
    int lowestNum = arr[0];
    int indxOfLowest = 0;
    for (int i = 0; i < n; i++)
    {
        if (lowestNum>arr[i])
        {
            lowestNum = arr[i];
            indxOfLowest = i;
        }
        
    }
    printf("%d %d", lowestNum, indxOfLowest+1);

    

    return 0;
}