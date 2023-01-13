#include <stdio.h>
//Strings and pointers
//String identifiers are "decayed" into pointers in the same way as array names are.
int main(void)
{
    char name[] = "Harry Potter"
    printf("%c", *name); //Output: H
    printf("%c", *(name + 1)); //Output: a
    printf("%c", *(name + 7)); //Output: o
    char* namePtr;
    namePtr = name;
    printf("%c", *namePtr); //Output: H
    printf("%c", *(namePtr + 1)); //Output: a
    printf("%c\n", *(namePtr + 7)); //Output: o
    return 0;
}