#include <stdio.h>
//reading strings from user inputs
int main()
{
    char name[40];
    printf("Please enter your name: ");
    scanf_s("%s", name);
    printf("Your name is %s.", name);
    return 0;
}