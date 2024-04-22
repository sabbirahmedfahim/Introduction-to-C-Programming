#include <stdio.h>
int main()
{
    long long int eyes, mouth, body;
    scanf("%lld %lld %lld", &eyes, &mouth, &body);
    long long int totalKatryUsingOnePiece;

    if (eyes <= mouth && eyes <= body)
    {
        totalKatryUsingOnePiece = eyes;
        mouth = mouth - eyes;
        body = body - eyes;
        eyes = 0;
    }
    else if (mouth <= eyes && mouth <= body)
    {
        totalKatryUsingOnePiece = mouth;
        eyes = eyes - mouth;
        body = body - mouth;
        mouth = 0;
    }
    else if (body <= eyes && body <= mouth)
    {
        totalKatryUsingOnePiece = body;
        eyes = eyes - body;
        mouth = mouth - body;
        body = 0;
    }

    long long int halfOfEyes = eyes / 2;
    long long int totalKatryUsingTwoPiece = 0;
    if (halfOfEyes >= body)
    {
        totalKatryUsingTwoPiece = body;
    }
    else
    {
        totalKatryUsingTwoPiece = halfOfEyes;
    }

    printf("%lld\n", totalKatryUsingOnePiece + totalKatryUsingTwoPiece);

    return 0;
}