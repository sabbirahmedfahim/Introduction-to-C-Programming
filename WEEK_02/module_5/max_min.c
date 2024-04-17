   #include <stdio.h>

   int main()
   {
      int a, b, c;
      scanf("%d %d %d", &a, &b, &c);
      int maxx;
      int minn;
      if (b<a && b<=c)
      {
      minn = b;
      } else if (c<=a && c<b)
      {
      minn = c;
      }
       else
      {
         minn = a;
      }
      
      if (b>a && b>=c)
      {
      maxx = b;
      } else if (c>=a && c>b)
      {
      maxx = c;
      }
       else
      {
         maxx = a;
      }
      
      printf("%d %d", minn, maxx);
      
      

      return 0;
   }