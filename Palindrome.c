#include <stdio.h>

void main()
{
    int n,r,reverse=0,temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp = n;

    while (n != 0)                        // n = 121                      // n = 12                        // n = 1
    {
        r = n % 10;                       // r = 121 % 10 => 1            // r = 12 % 10 = 2              // r = 1 % 10 => 1
        reverse = reverse * 10 + r;       // reverse = 0 * 10 + 1 => 1    // reverse = 1 * 10 + 2 => 12   // reverse = 12*10+1=>121
        n = n / 10;                       // n = 121/10 => 12             // n = 12 / 10 => 1             // n = 1 / 10 => 0
    }
    if (temp == reverse)
    {
        printf("It is a palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }
}