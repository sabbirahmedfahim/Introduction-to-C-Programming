#include<stdio.h>

void name(char name1[100], char name2[100])
{
    printf("%s %s", name1, name2); //YOU MUST prinT inSide void
}
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);
    name(a, b);
    // name(); 
    
    return 0;
}