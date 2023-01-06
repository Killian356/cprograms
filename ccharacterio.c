#include <stdio.h>
int main()
{
    //C character I/O
    char chr1;
    printf("Please enter a character:");
    scanf_s("%c", &chr1);
    printf("You have enterd %c.", chr1);
    return 0;
}