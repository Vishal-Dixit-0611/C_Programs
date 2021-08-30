#include <stdio.h>

int main()
{
    int n, num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int count = 1;
    while (count<=n)
    {
        sum = sum + count;
        count++;
    }
   
    printf("Sum of first %d natural numbers is: %d", n, sum);
    return 0;
}