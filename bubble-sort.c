#include <stdio.h>
#include <conio.h>
int size, i, j, array[30];

void bubbleSort(int n)
{
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < (size-i-1); j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }    
    }
}

int main()
{
    printf("\n##BUBBLE SORT CODE##\n");

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Before Sorting\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    bubbleSort(size); // sorting

    printf("After Sorting\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}