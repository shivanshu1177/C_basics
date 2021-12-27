#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{

    int x, y;

    printf("Enter x:");
    scanf("%i", &x);

    printf("Enter y:");
    scanf("%i", &y);

    swap(&x, &y);
    printf("After swap: x = %i, y = %i", x, y);


    return 0;
}
