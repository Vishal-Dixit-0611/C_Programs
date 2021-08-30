# include <stdio.h>
int number,num;

int fact(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else 
    { 
        return (number * fact(number-1));
    }
}

int main()
{
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The factorial of %d number is %d", num,fact(num));
    return 0;
}