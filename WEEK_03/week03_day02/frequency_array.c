#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N];
    int count[100001] = {0}; //limit very important
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= M; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}