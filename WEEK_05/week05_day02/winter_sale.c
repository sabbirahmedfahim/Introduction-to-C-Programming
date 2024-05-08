#include <stdio.h>

//hey, please take a note and pencil before looing for the code. It is  all about
// you observation and creativity that how faster you solve. Cheap codes doesnt matter.
// Think before ...
int main()
{
    float discount, originalPrice;
    scanf("%f %f", &discount, &originalPrice);
    printf("%.2f", (100*originalPrice)/(100-discount));

    return 0;
}