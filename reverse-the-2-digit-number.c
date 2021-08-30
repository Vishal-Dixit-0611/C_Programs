# include<stdio.h>
int rev(int num)
{
    int remainder = 0;
    int reverse = 0;

    remainder = num % 10;
    reverse = reverse *10 + remainder;
    num = num/10;

    remainder = num % 10;
    reverse = reverse *10 + remainder; 
    

}

void main()
{
    int num = 45;
    printf("Original Number is : %d,\t\n",num);
    printf("Revrese Number is :%d\t", rev(num));
}