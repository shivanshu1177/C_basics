#include<stdio.h>

int main()
{
    int n;

    printf("ENTER: ");
    scanf("%i", &n);

    for (int i = 0; i <= 10; i++)
    {
        printf("%i %c %i %c %i\n", n, '*', i, '=', n*i);
    }
    
    return 0;
}