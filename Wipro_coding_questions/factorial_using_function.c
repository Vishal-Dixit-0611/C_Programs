#include<stdio.h>
#include<conio.h>

int fact(int n)
{
    int factorial;
    if(n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        factorial = n * fact(n-1);
        return factorial;
    }
}

void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Factorial of %d number is %d",num,fact(num));
    
}