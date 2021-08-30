#include <stdio.h>
#include <conio.h>

void main()
{
    int value, remainder, sum = 0, temp;
    printf("Enter the Value: ");
    scanf("%d", &value);
    temp = value;

    while (value > 0)
    {
        remainder = value % 10;
        sum = sum + (remainder * remainder * remainder);
        value = value / 10;
    }
    if (temp==sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }
}