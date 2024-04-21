// ATTENTION: when u convert codes of #gets to code, comment out #fgets 
#include<stdio.h>
#include<string.h> //Phitron team first time used the library in the course
int main()
{
    char arr1[100]; //take input: sabbir ahmed //length 13

    char arr2[100] = "sabbir ahmed";
    printf("Length of demo name (without NULL): %d\n", strlen(arr2));

    /*#gets is old & do not supports everywhere. It can take input as wish
    you give in windows, but it will not work for linux/online compiler*/
    // printf("Print using #gets: \n"); 
    // gets(arr1); //take input: sabbir ahmed //length 13
    // printf("%s\n", arr1);

    // printf("Print using brandnew #fgets:\n");
    // printf("Taking input not counting NULL:\n");
    // fgets(arr1, 12, stdin);  //take input: sabbir ahmed //length 12
    // printf("%s\n", arr1);

    printf("\nCounting NULL as an element of the array:\n");
    fgets(arr1, 13, stdin);  //take input: sabbir ahmed //length 13
    //#fgets considers NULL char as an element of an array
    //#fgets accepts ENTER as input, whereas gets or scanf do not //bujini
    // arr1[12] = '\0'; //12 index== 13th arr1
    arr1[10] = '\0'; //10 index== 11th arr1 //forcefully decrease input len
    printf("%s", arr1);


    return 0;
}