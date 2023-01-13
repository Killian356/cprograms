#include <stdio.h>
// Passing strings to functions
void displayString(char str[]);
int main()
{
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    displayString(str); //Passing string into a function.
    return 0;
}
void displayString(char str[])
{
    printf("String Output: ");
    puts(str);
}