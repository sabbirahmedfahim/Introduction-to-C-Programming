#include<stdio.h>
int main()
{
    char arr[101];
    scanf("%s", arr);
    // int count[26]; //mistake
    int count[26] = {0};
    for (int i = 0; arr[i]!='\0'; i++)
    {
        // int val = arr[i-97]; //mistake

        // int val = arr[i]-97; //THINK
        // count[val]++;
        count[arr[i]-97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i]==0)
        {
            continue;
        }
        
        // printf("%c - %d\n", arr[i]+97, count[i]); //mistake
        printf("%c ache %d bar\n", i+97, count[i]);
    }
    
    
    
    return 0;
}