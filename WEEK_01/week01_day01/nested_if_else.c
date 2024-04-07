#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   if (n>20000)
   {
    printf("Gucci Bag\nGucci Belt");
   } else if (n<=20000 && n>=10000)
   {
    printf("Gucchi Bag");
   } else if (n>=5000)
   {
    printf("Levis Bag");
   } else if (n>0)
   {
    printf("Something");
   }
   
   
    
   
   
   return 0;
}