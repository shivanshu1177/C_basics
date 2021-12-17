#include <stdio.h>

int main()
{
    int class, sub;

    printf("Enter Class and No. OF SUBJECTS FAILED IN : ");
    scanf("%i""%i", &class, &sub);

    switch (class)
    {
    case 1:
        if (sub > 3)
        {
            printf("You do not get a GRACE");
        }
        else
        {
            printf("You get a grace of 5 marks");
        }
        break;
    
    case 2:
        if (sub > 2)
        {
            printf("You do not get a GRACE");
        }
        else
        {
            printf("You get a grace of 4 marks");
        }
        
        break;

    case 3:
        if (sub > 1)
        {
            printf("You do not get a GRACE");
        }
        else
        {
            printf("You get a grace of 5 marks");
        }
        break;

    default:
        printf("INVALID");
        break;
    }

    return 0;
}
