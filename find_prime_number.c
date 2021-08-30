#include <stdio.h>
#include <conio.h>

void main()
{
    int number, i, sum;
    printf("Enter the number: ");
    scanf("%d", &number);

    for (i = 2; i <= number / 2; i++)
    {
        sum = number % i ;
        if (sum == 0)
        {
            printf("It is not a Prime number");
            break;
        }
        else
        {
            printf("It is a Prime number ");
            break;
        }
    }        
}