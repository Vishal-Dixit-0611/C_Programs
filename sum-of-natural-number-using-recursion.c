# include <stdio.h>

int value,new_value;
int natural_number(int value)
{
    if (value >= 0)
    {
        new_value = value + natural_number(value-1);
        return new_value;
    }
    else {
        return 0;
    }
}

void main()
    {
        int number;
        printf("Enter the number: ");
        scanf("%d",&number);
        printf("The sum of the given natural number is %d",natural_number(number));
        
    }



