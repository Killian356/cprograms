#include <stdio,h>
int main()
{
    //I/O Multiple Values
    //Here's how you accept numerous user inputs and display them:
    int x;
    float y;
    printf("please first enter an integer and then a float:");
    //Taking multiple inputs
    scanf_s("%d%f", &x, &y);
    printf("You have entered %d and %f", x, y);
    return 0;
}