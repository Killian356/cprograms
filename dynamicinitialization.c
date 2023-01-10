#include <stdio.h>
//Dynamic Initialization : Value is allocated to a variable at runtime
int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf_s("%d", &a);
    printf("The entered value of a is: %d\n", a);
    return 0;
}