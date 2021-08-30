#include <stdio.h>
#include <conio.h>

int main()
{
    int matrix[10][10], tnp[10][10];
    int r, c, i, j;

    printf("Enter the size of matrix: ");
    scanf("%d %d", &r, &c);

    printf("Enter Metrix:\n ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            tnp[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the given matrix is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf(" %d", tnp[i][j]);
        }
        printf("\n");
    }
}