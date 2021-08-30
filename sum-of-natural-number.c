#include <stdio.h>

int main()
{
    int n, num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (num = 1; num <= n; num++)
    {
        sum = sum + num;
    }
   
    printf("Sum of first %d natural numbers is: %d", n, sum);
    return 0;
}