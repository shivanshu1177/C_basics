#include <stdio.h>

int main()
{
    int n, reminder, rev;

    printf("Enter a Number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        reminder = n % 10 ;
        rev = rev*10 + reminder;
        n /= 10;

    }
    if (n = rev)
    {
        printf("Penlidrome");
    }
    else
    {
        printf("Not Penlidrome");
    }
    
    
    return 0;
}
