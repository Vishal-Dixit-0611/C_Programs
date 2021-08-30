#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    int sum = 0;
    printf("enter number: ");
    scanf("%d", &num);

    if (num == 2 || num == 3)
    {
        printf("It is a prime number");
    }

    for (int i = 2; i <= num / 2; i++)
    {
        sum = num % i;
        if (sum == 0)
        {
            printf("Not Prime number");
            
            break;
            
        }
        else
        {
            printf("Prime Number");
            break;
        }
    }
}

    