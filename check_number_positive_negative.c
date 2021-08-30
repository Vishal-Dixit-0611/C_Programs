# include <stdio.h>
int a;
void main()
{
    printf("Enter the Number\n");
    scanf("%d",&a);
    printf("The entered number is:%d\t\n",a);
    if (a>0)
    {
        printf("It is a Positive Number");
    }
    else if (a==0)
    {
        printf("It is neigher a Positive Nor Negative number");
    }
    else 
    {
        printf("It is a Negative Number");
    }
}