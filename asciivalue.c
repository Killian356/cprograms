#include <stdio.h>
int main()
{
    //ASCII value
    char chr1;
    printf("please enter a character:");
    scanf("%c", &chr1);
    //%c is used to display a character
    printf("You have entered %c.\n", chr1);
    //%d is used to display ASCII value
    printf("ASCII value os %d.", chr1);
    return 0;
}