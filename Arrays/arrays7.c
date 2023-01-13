#include <stdio.h>
//Calculatign average usingarrays
int main()
{
    int marks[10], i, n, sum = 0, average;
    printf("Enter number of elements: ");
    scanf_s("%d", &n);
    for (i = 0; i < n; ++i){
        printf("Enter number%d: ", i + 1);
        scanf_s("%d", &marks[i]);
        //adding user-supplied numbers to the sum variable
        sum += marks[i];
    }
    average = sum / n;
    printf("Average = %d", average);
    return 0;
}