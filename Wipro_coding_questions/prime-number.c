// finding Prime number

#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    int sum = 0;

    printf("Enter the number to check that the number is prime number or not:\n");
    scanf("%d", &num);

    if (num == 2 || num == 3)
    {
        printf("%d is a prime number", num);
    }

    for (int i = 2; i <= num / 2; i++)
    {
        sum = num % i;
        if (sum == 0)
        {
            printf("%d is not a Prime number", num);
            break;
        }
        else
        {
            printf("%d is a prime number", num);
            break;
        }
    }
}