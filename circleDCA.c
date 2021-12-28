#include<stdio.h>

void dia(float d)
{
    d = d * 2.0;
    printf("%f\n", d);

}

void cir(float c)
{
    c = c * 2 * 3.14;
    printf("%f\n", c);

}

void ar(float a)
{
    float z;
    z = a * a;
    a = z * 3.14;
    printf("%f\n", a);

}

int main()
{
    float r;

    printf("Enter: ");
    scanf("%f", &r);

    dia(r);

    cir(r);

    ar(r);

    return 0;
}

