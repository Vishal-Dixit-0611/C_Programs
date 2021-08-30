#include <stdio.h>
#include <conio.h>

int main()
{
    int no1, no2, i, j,flag ;
    printf("Enter the numbers: ");
    scanf("%d",
          "%d",
          &no1, &no2);
    printf("Prime number from %d to %d are:\n", no1,no2);
    for (i = no1+1; i < no2; ++i)
    {
        for(j = 2; j< i/2; ++j)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }   
        }
        if (flag == 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}