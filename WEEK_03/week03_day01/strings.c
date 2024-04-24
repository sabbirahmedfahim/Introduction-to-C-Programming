    #include<stdio.h>
    #include<string.h>
    int main()
    {
        char a[11], b[11];
        scanf("%s %s", &a, &b);
        int lenA = strlen(a); //storing length of one variable is MUST for the case
        printf("%d %d\n", strlen(a), strlen(b));
        printf("%s%s\n", a, b);
        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        for (int i = 0; i<lenA; i++)
        {
            printf("%c", a[i]); 
        }
        printf(" ");
        for (int i = 0; b[i]!='\0'; i++)
        {
            printf("%c", b[i]);
        }
        
        return 0;
    }