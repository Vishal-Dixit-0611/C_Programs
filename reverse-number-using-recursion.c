#include <stdio.h>

int reverse_func(int value)
{
    int remainder;
    int reverse = 0;
    if (value)
    {
        remainder = value % 10;
        reverse = reverse * 10 + remainder; 
        reverse_func(value/10); 
    }
    else
    {
        return reverse;
    }
    
}

void main()
{
    int number;
    printf("Enter the Number: ");
    scanf("%d", &number);
    printf("The reverse of the %d is: %d", number, reverse_func(number));
    
}