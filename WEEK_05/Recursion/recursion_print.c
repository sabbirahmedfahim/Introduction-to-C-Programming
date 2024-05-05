#include <stdio.h>

void print_1_To_5(int i)
{
    if (i == 6) return; // it is called Base Case, used to stop recursion 
    printf("%d ", i);
    print_1_To_5(i + 1);
}
void print_5_To_1(int i)
{
    if (i == 0) return; // it is called Base Case, used to stop recursion
    printf("%d ", i);
    print_5_To_1(i - 1);
}

int main()
{
    print_1_To_5(1);
    printf("\n");
    print_5_To_1(5);

    return 0;
}