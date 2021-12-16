#include <stdio.h>

int main(int argc, char const *argv[])
{
    float P, R, T, SI;
    
    printf("ENTER Principal HERE: ");
    scanf("%f", &P);

    printf("ENTER Rate HERE: ");
    scanf("%f", &R);

    printf("ENTER Time HERE: ");
    scanf("%f", &T);

    SI = (P * R * T)/100;

    printf("Your Simple Intrest is %f", SI);

    return 0;
}
