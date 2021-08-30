#include<stdio.h>
#include<conio.h>

void main()
{
    int rows,i,j;
    printf("Enter the rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||i==j||i==rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            printf("\n");
        }
    }
}