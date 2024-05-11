/*I hafta go through step-by-step to debug the errors
So there's no chance to escape before /strong/ understanding

You Must Run The Codes each n every steps to detect specific errors*/

// STEP-1

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);

    char arr1[a];
    // The first input (e.g., "10\n") contains a newline, which is unexpected
    fgets(arr1, sizeof(arr1) / sizeof(char), stdin);
    /*CODE EXECUTES because fgets encounters the newline character,
       which serves as the indicator to terminate the input*/

    // for better understanding, commented out the next four line of code
    /*scanf("%d", &b);
    char arr2[b];
    fgets(arr2, sizeof(arr2) / sizeof(char), stdin);
    printf("%s %s", arr1, arr2);*/

    printf("%s", arr1); 

    return 0;
}

// STEP-2 (added getchar() to avoid newline character)

/*HEY! your string size will be a-1 or b-1, because fgets stores '\n'
for the last cell(index)*/
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    char arr1[a];
    /*getchar is similar to scanf. getchar() reads a single character as input.*/

    /*Question: Why do we use getchar() after scanf() and before fgets()?

    Answer: We use 'getchar()' after 'scanf()' and before 'fgets()'
    to handle the newline character ('\n') that remains in the input buffer
    after using 'scanf()' to read input. This ensures that the newline character
    is consumed and does not interfere with the subsequent 'fgets()' call,
    preventing unexpected behavior in input processing.*/

    /*Question: What is the unexpected behavior?    

    Answer: The unexpected behavior is that 'fgets()' may read
    the leftover newline character ('\n') as an empty line,
    causing it to terminate prematurely
    without reading any meaningful input.*/

    getchar(); // getchar receives the extra newline char [Ignored Newline]
    fgets(arr1, sizeof(arr1) / sizeof(char), stdin);

    scanf("%d", &b);
    char arr2[b];

    getchar(); // [Ignored Newline Again by receiving it in getchar()]
    fgets(arr2, sizeof(arr2) / sizeof(char), stdin);

    printf("%s %s", arr1, arr2);
    return 0;
}

// STEP-3

/*Did you notice that when we initialize array size, we always lose single index?
This happens because getchar stores '\n' in the last index. To avoid errors-
increase the size of your array. If is not neccessary to increase by just 1;
you can increase by whatever you want*/

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    char arr1[a + 10];

    getchar();
    fgets(arr1, sizeof(arr1) / sizeof(char), stdin);
    /*Question: Is there a need to use getchar() after fgets()
    to handle the newline character ('\n')?

    Answer: No Need for Additional getchar()
    In this context, while using fgets(), there's no immediate need to
    use getchar() after fgets() to handle the newline character ('\n').
    This is because fgets() automatically handles newline characters as
    part of the input string it reads.*/

    scanf("%d", &b);
    char arr2[b + 10];

    getchar(); // Consume the newline character after reading 'b'
    fgets(arr2, sizeof(arr2) / sizeof(char), stdin);

    printf("%s %s", arr1, arr2);
    //think why output is new line
    //because 'fgets' stores newline :)

    return 0;
}