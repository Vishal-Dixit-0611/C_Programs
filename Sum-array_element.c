#include<stdio.h>
#include<conio.h>

void main()
{
    int num, i, array[30], sum=0, j;
    printf("Enter the Number of elements in array: ");
    scanf("%d", &num);

    printf("Enter the values in Array: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d",&array[i]);
    }
    for (i = 0 ; i < num; i++)
    {
        sum = sum + array[i];
        
    }
    printf("The sum is: %d",sum);
    
}