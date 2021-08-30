// Finding Factorial Of a given number:-

#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i;
    int sum = 0;
     printf("Enter the number: ");
     scanf("%d",&num);

    for(i=0;i<=num;i--)
    {
        sum = num * num-1;
        break;
        printf("Factorial of %d number is %d",num,sum);
    }
}