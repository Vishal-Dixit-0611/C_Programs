#include <stdio.h>
#include <conio.h>

void main()
{
    int n,r,s=0,temp;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp = n;

    while(n > 0)
    {
        r = n % 10;
        s = s + (r*r*r);
        n = n / 10;
    }
    if (temp == s)
    {
        printf("An armstrong number");
    }
    else
    {
        printf("Not Armstrong number");
    }
}