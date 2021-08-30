#include <stdio.h>
#include <conio.h>

void main()
{
    int A[10][10], B[10][10], R[10][10];
    int arows, acolumns, brows, bcolumns;
    int r, c, i, j, k, sum=0;

    printf("Enter the size of matrix-a\n");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter the Matrix-A\n");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < acolumns; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the size of matrix-b\n");
    scanf("%d %d", &brows, &bcolumns);

    printf("Enter the matrix-b\n");
    for (i = 0; i < brows; i++)
    {
        for (j = 0; j < bcolumns; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    printf("Resultant Matrix\n");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < bcolumns; j++)
        {
            for (k = 0; k < brows; k++)
            {
               sum += A[i][k] * B[k][j];
            }
            printf("%d",sum);
        } 
        printf("\n");   
    }
}