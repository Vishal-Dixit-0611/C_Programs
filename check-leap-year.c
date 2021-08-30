#include<stdio.h>

void main()
{
    int y;
    printf("Enter the year: ");
    scanf("%d",&y);

    if(y % 4 == 0 )
    {
       if (y % 100 == 0)
       {
            if (y % 400 == 0)
            {
                printf("It is a leap year");
            }
            else
            {
                printf("It is not a Leap year");
            }
       } 
       else
       {
           printf("It is Leap Year");
       }
    }  
    else
    {
        printf("It is not a Leap year");
    }
    
}