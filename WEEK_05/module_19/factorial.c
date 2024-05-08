// concept copied from instructor 
// https://drive.google.com/file/d/1W5eF2U_-O-9yOPNjCOat2ijbNjvcOt4e/view?usp=sharing
#include <stdio.h>

long long int factorial(long long int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    long long int ans = factorial(n-1);
    //go through the link to understand the mechanism (very easy)
    return ans * n;
}   
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int ans = factorial(n);
    printf("%lld", ans);
    return 0;
}

// my valid code
// #include <stdio.h>

// long long int factorial_machine(int n, int i, long long int factorial)
// {
//     if (i>n)
//         return factorial;
//     factorial = factorial * i;
//     return factorial_machine(n, i + 1, factorial);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%lld", factorial_machine(n, 1, 1));

//     return 0;
// }
