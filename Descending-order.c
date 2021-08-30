#include <stdio.h>

void main()
{
    int n, i, value[10], j, k;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Enter the number in array:\n ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&value[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (value[j] > value[i])
            {
                k = value[i];
                value[i] = value[j];
                value[j] = k;
            }
        }
    }
    printf("After Descending Order List is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t\n", value[i]);
    }
    printf("The Largest number in array is\n%d",value[0]);
}