#include <stdio.h>

int main()
{
    int n= 5;

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = n; k > i; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
