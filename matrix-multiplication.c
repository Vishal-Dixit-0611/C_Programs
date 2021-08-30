#include<stdio.h>
#include<conio.h>

int main()
{
    int A[10][10],B[10][10],p[10][10];
    int arows,acolumns,brows,bcolumns,i,j,k;
    int sum = 0; 

    printf("Enter the size of matrix-A:\n ");
    scanf("%d %d",&arows,&acolumns);

    printf("Enter the Matrix-A:\n ");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < acolumns; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }

    printf("Enter the size of matrix-B:\n ");
    scanf("%d %d",&brows,&bcolumns);

    printf("Enter the Matrix-B:\n ");
    for (i = 0; i < brows; i++)
    {
        for (j = 0; j < bcolumns; j++)
        {
            scanf("%d",&B[i][j]);
        }
        
    }

    printf("Resultant Matrix:\n ");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < bcolumns; j++)
        {
            for(k = 0; k < brows; k++)
            {
                sum += A[i][k] * B[k][j];
                
            }
            printf("%d",sum);
        }
        printf("\n");
        
    }
    
}
