#include <stdio.h>
//input & output array elements
int main()
{
    int values[5];
    printf("Enter 5 integers: ");
    //accumulating and saving data in an array
    for (int i = 0; i < 5; ++i) {
        scanf_s("%d", &values[i]);
    }
    printf("Displaying integers: ");
    //printing elements of an array
    for (int i = 0; i < 5; ++i){
        printf("%d\n", values[i]);
    }
    return 0;
}