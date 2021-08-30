#include <stdio.h>

void main()
{
    int n, value[30], i, largest;
    printf("Enter the number of Elements: ");
    scanf("%d", &n);

    printf("Enter the value of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value[i]);
    }

    largest = value[0];

    for (i = 0; i < n; i++)
    {
        if (value[i] > largest)
        largest = value[i];
    }
    printf("\n largest element present in the given array is : %d", largest);

}