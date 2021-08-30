#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if (
        ch == 'A' || ch == 'a'|| 
        ch == 'E' || ch == 'e'|| 
        ch == 'I' || ch == 'i'||  
        ch == 'O' || ch == 'o'|| 
        ch == 'U' || ch == 'u'
        )
    {
        printf("It is a vowel");
    }

    else
    {
        printf("It is a Consonent");
    }
}