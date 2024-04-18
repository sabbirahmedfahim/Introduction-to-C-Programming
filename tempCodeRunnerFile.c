#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      scanf("%d", arr[i]);
   }
   
   int flag = 0;
   
   for (int i = 0; i < n; i++)
   {
      if (arr[0]!=arr[i])
      {
         flag = 1;
      }
      
   }
   if (flag==1)
   {
      printf("Yes");
   }
   else
   {
      printf("No");
   }
   
   
   

   return 0;
}