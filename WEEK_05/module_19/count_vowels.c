#include <stdio.h>
#include <string.h>

// You Must Understand: How Return count_vowels(arr, i+1)+1 works

int count_vowels(char arr[], int i)
{
    if (arr[i] == '\0')
        return 0;
    if (arr[i] >= 'A' && arr[i] <= 'Z')
    {
        arr[i] = arr[i] + 32;
    }

    while (arr[i]!='\0')
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' ||
            arr[i] == 'o' || arr[i] == 'u')
        {
            // count++; 
            return count_vowels(arr, i + 1)+1;
        }
        else
        {
            return count_vowels(arr, i + 1); 
        }
        
    }
}
int main()
{
    char arr[201];
    // scanf("%s", &arr);
    fgets(arr, 201, stdin);
    printf("%d", count_vowels(arr, 0));

    return 0;
}