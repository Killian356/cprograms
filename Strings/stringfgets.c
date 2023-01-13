#include <stdio.h>
//Reading Strings using fgets and displaying using puts
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin); //read string
    printf("Name: ");
    puts(name); //display string
    return 0;
}