#include <stdio.h>
int main()
{
    int number1, number2;
    scanf("%d %d", &number1, &number2);
    if(((number1 == 0) || (number1 == 1)) || ((number2 == 0) || (number2 == 1)))
    {
        int HOR = (!number1 && number2) || (number1 &&! number2);
        printf("%d \n", HOR);
    }
    else{
        printf("Enter 0 or 1");
    }
}