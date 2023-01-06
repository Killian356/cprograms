#include <stdio.h>
int main()
{
    //float and double input and output
    float number1;
    double number2;
    printf("Please enter a number:");
    scanf_s("%f", &number1);
    printf("Please enter another number:");
    scanf_s("%lf", &number2);
    printf("number1 = %f\n", number1);
    printf("number2 = %lf", number2);
    return 0;
}