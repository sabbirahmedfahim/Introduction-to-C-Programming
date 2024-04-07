#include <stdio.h>

int main()
{
   int n, temp;
   scanf("%d", &n);
   while (n!=0)
   {
    temp = n;
    n = n/10;
   }
   
   if (temp%2==0)
   {
    printf("EVEN");
   } else
   {
    printf("ODD");
   }
   
   
   return 0;
}
