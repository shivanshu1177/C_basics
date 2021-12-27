#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter: ");
    scanf("%i", &n);

    while (n != 0)
    {
        n = n/10;
        i++;
    }
    printf("%i", i);


    return 0;
}
