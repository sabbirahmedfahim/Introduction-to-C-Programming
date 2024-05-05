// magic :D 
#include <stdio.h>

void reverse_recursion(int i)
{
    if (i == 6) return;
    reverse_recursion(i + 1); 
    printf("%d ", i);
    
}

int main()
{
    reverse_recursion(1); //input: 1

    return 0;
}