#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double x = 3.0001;
    printf("%.2lf\n", ceil(x));
    printf("%.2lf\n\n", floor(x));

    double y = 5.49;
    double z = 5.51;
    printf("%.2lf\n", round(y));
    printf("%.2lf\n\n", round(z));

    int a = 25;
    int b = 24;
    printf("%.2lf\n", sqrt(a));
    printf("%.4lf\n", sqrt(b));
    printf("They all are under math.h function\n\n");

    printf("abs is under stdlib.h func: \n");
    int n = -100;
    printf("%d\n", abs(n)); //abs means absolute value
    
    
    return 0;
}