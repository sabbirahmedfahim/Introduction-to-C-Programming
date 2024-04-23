// it's just a logic/basic, i will simply use strcpy()
#include<stdio.h>
#include<string.h>

//if you assign or take input a string, NULL will be automatically generated.
//but if you wanna copy a string, you have to *include* a NULL character. 
int main()
{
    char a[100], b[100];
    scanf("%s %s", a,b);
    for (int i = 0; i <= strlen(b) ; i++)
    {
        b[i] = a[i];
    }
    printf("%s %s", a, b);
    
    
    return 0;
}