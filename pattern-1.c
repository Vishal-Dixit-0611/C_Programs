#include<stdio.h>
#include<conio.h>

void main()
{
    int rows,i,j;
    printf("enter the number: ");
    scanf("%d",&rows);


    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("*");
            
        }
        printf("\n");
       printf("------\n");      
    }
     
}