#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int maxx_result = INT_MIN; 
    while (n--)
    {
        int result;
        scanf("%d", &result);
        if (result>maxx_result)
        {
            maxx_result = result;
        }
        printf("Result %d - Maximum Result %d\n", result, maxx_result);
        
    }
    
    
    return 0;
}