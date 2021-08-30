#include <stdio.h>
#include <conio.h>

void main()
{
    int start, end, i, temp, remainder;
    int  sum = 0;
    printf("Enter the lower limit: ");
    scanf("%d", &start);

    printf("Enter the higher limit: ");
    scanf("%d", &end);

   for (i = start; i <= end; i++)
    {
        temp = i;
        while (temp)
        {
            remainder = temp % 10;
            sum = sum * 10 + remainder;
            temp = temp / 10;
        }
        if (temp == sum)
        {
            printf("%d", &i);
        }
    }
    printf("Palindrom between %d and %d is:\n ", start, end);
}
 
