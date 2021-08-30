#include<stdio.h>
#include<string.h>

int main()
{
    char str[10];
    int i;
    printf("Enter the string: ");
    scanf("%s",&str);

    for(i = 0;i<=str[i];i++)
    {
        if(str[i]>=97 && str[i]<=127)
        {
            str[i]=str[i]-32;
        }
    }
    printf("Upper Case String is: %s",str);
    return 0;
}