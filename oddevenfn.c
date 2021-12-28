#include<stdio.h>

void check(int *i)
{

    if (*i % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    

}
int main()
{
    int n;

    printf("Enter a no: ");
    scanf("%i", &n);

    check(&n);

    return 0;
}
