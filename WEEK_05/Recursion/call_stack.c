#include<stdio.h>
 
void world()
{ 
    printf("World Start\n");
    printf("World End\n");
}
void hello()
{
    printf("Hello Start\n");
    world();
    printf("Hello End\n\n");
}

int main()
{
    printf("Main Start\n\n");
    hello();
    printf("Main End\n");
    
    
    return 0;
}