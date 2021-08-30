// Palindrome number

#include<stdio.h>

void main()
{
    int Number, Sum, Reverse=0, remainder,temp ;
    printf("Enter the number:\n");
    scanf("%d",&Number); // 121 ,  12 ,  1
    temp = Number;

    while (Number != 0)
    {
        remainder = Number % 10; //1 , 2 , 1
        Reverse = Reverse * 10 + remainder; //1 , 12 , 121
        Number = Number / 10; // 12 , 1
    }
    if (temp == Reverse)
    {
        printf("it is an Palindrome Number");
    }
    else
    {
        printf("it is not Palindrome Number");
    }
    
}