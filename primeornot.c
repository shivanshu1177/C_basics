#include<stdio.h>

void check(int *i)
{

    if (*i % 2 == 1)
    {
        printf("Its a prime");
    }
    else
    {
        printf("not a prime");
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
