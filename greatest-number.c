# include <stdio.h>

int a,b,c; 
void main()
{
    
    printf("Enter 1st Number:");
    scanf("%d",&a);

    printf("Enter 2nd Number:");
    scanf("%d",&b);

    printf("Enter 3rd Number:");
    scanf("%d",&c);

    if (a > b && a > c)
    {
        printf("1st number is greater than 2nd and 3rd");
    }
    else if (b > c && b > a)
    {
        printf("2nd number is greater than 1st and 3rd");
    }
    else
    {
        printf("3rd number is greater than 1st and 2nd");
    }
    
}

