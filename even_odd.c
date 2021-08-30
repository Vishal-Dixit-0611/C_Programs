#include <stdio.h>
#include <conio.h>
int a;
int main()
{
    printf("Enter the digit you want to search\n");

    scanf("%d",&a);

    printf("The entered digit is: %d\n",a);

    if(a%2==0)
    {
        printf("It is a Even number");
    }
    else 
    {
        printf("It is a Odd Number");
    }
}