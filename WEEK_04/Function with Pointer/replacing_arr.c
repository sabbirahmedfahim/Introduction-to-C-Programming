#include<stdio.h>

void replacingInteger(int * arr)
{
    arr[0]= 999;
}
void replacingString(char * arr)
{
    arr[0]='B';
    arr[1]='o';
}

int main()
{
    int arr1[]= {10, 20, 30, 40, 50};
    char arr2[]= "Hello";

    replacingInteger(arr1);
    replacingString(arr2);

    printf("%d\n",arr1[0]);
    printf("||\n");
    printf("%s\n",arr2);
    return 0;
}