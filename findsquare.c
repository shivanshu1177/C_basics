#include<stdio.h>

void cal(int *i)
{
    int s;
    s = *i * *i;
    printf("%i", s);


}
int main()
{
    int n;

    printf("enter: ");
    scanf("%i", &n);

    cal(&n);
    return 0;
}

