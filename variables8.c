cfile.h
extern int x= 10; //external variable (also global)
program.c 
#include "cfile.h"
#include <stdio.h>
void printVal()
{
    printf("Global variable: %d", global_variable);
}