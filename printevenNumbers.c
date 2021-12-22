#include<stdio.h>

int main()
{
    int n;

    printf("Enter: ");
    scanf("%i", &n);

    for (int i = 0; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            printf("%i\n", i);
            i++;
        }

        
    }
    printf("Odd");
    
    
    return 0;
}
