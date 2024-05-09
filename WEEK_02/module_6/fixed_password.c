// this is how Phitron team teach me 
// #include<stdio.h>
// int main()
// {
//     int n;
//     while(scanf("%d",&n) != EOF) //EOF means End of File
//     {
//         if(n==1999)
//         {
//             printf("Correct\n");
//             break;
//         }
//         else 
//         {
//             printf("Wrong\n");
//         }
//     }
//     return 0;
// }

// how i maked a shortcut (it is also accepted in codeforces)
#include <stdio.h>
int main()
{
   int n;
   while (n != 1999)
   {
      scanf("%d", &n);
      if (n == 1999)
      {
         printf("Correct\n");
      }
      else
      {
         printf("Wrong\n");
      }
   }

   return 0;
}