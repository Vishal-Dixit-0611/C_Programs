#include <stdio.h>
#include <conio.h>

void main()
{
    int value[10], i, j, k,n;

    printf("Enter the number: \n");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("Enter numbers in array: ");
        scanf("%d", &value[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (value[i] > value[j])
            {
                k = value[i];
                value[i] = value[j];
                value[j] = k;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", value[i]);
    }
}
