#include<stdio.h>
int main()
{
    printf("%d\n", 55%100);
    // eita khatay koro, else visualization koro

    int n = 1234;
    int reverse = 0;
    while (n!=0)
    {
        int remainder = n%10; //5 - 4
        reverse = reverse*10+remainder; //5 - 4
        n/=10; //4 - 0
    }
    printf("%d", reverse);
    
    
    
    return 0;
}