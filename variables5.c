#include <stdio.h>
//Variables
//Example 5
int x = 20; //global variable
void cfunction1()
{
    printf("%d\n", x);
}
void cfunction2()
{
    printf("%d\n", x);
}
int main()
{
    cfunction1();
    cfunction2();
    return 0;
}


