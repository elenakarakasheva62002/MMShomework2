#include <stdio.h>
int main()
{
    float num1, num2, num3, max;
    scanf("%f %f %f", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3)
    {
        printf("%.2lf\n", num1);
    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("%.2lf\n", num2);
    }
    else if(num3 > num1 && num3 > num2)
    {
        printf("%.2lf\n", num3);
    }
    else if((num1 == num2) && num1 > num3)
    {
        printf("%.2lf\n1", num1);
    }
    else if((num2 == num3) && num2 > num1)
    {
        printf("%.2lf", num2);
    }
    else if((num1 == num3) && num1 > num2)
    {
        printf("%.2lf", num1);
    }
}