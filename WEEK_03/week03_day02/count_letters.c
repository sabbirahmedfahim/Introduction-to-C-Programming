#include <stdio.h>
int main()
{
    char ch;
    // int count[10000]; //mistake
    int count[26] = {0};
    while (scanf("%c", &ch) != EOF) // don't understand
    {
        count[ch - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
        {
            continue;
        }

        printf("%c : %d\n", i + 97, count[i]);
    }

    return 0;
}