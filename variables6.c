#include <stdio.h>
//Variables 
//Static variables
//Example 6
void cfunction(){
    int x = 10; //local varial
    static int y = 20; // static variable
    x = x + 10;
    y = y + 10;
    printf("\n%d, %d\n", x, y);
}

int main(){
    cfunction();
    cfunction();
    cfunction();
    return 0;
}