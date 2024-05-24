#include<stdio.h>

void name(char name1[100], char name2[100])
{
    return;
    //we cannot use return inSide void but we can call return without
    // any value. it workes here like a "break" statement.
    printf("%s %s", name1, name2); 
}
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);
    name(a, b); 
    
    return 0;
}