#include <stdio.h>
// Program to take age and height inout
int main()
{
    int age;
    double height

    printf("Enter the age:");
    scanf_s("%d", &age);

    printf("Enter the height: ");
    scanf("%lf", &height);

    printf("Age = %d", age);
    printf("\nheight = %.lf", height);

    return 0;
}