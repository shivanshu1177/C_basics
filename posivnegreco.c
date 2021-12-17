#include <stdio.h>

main()
{
    int num;

    printf("Enter a no: ");
    scanf("%i", &num);

    if (num>0)
    {
        printf("number is positive");

    }
    else if (num<0)
    {
        
        printf("number is negative");
    }
    else 
    {
        printf("Number is Zero");
    }
    
    return 0;
}