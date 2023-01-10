#include <stdio.h>
//Getting the sizes of integer typesusing sizeof method
int main()
{
    printf("sizeof(short) = %d bytes\n", sizeof(short));
    printf("sizeof(int) = %d bytes\n", sizeof(int));
    printf("sizeof(signed int) = %d bytes\n", sizeof(signed int));
    printf("sizeof(long) = %dbytes\n", sizeof(long));
    printf("sizeof(long long) = %dbytes\n", sizeof(long long));
    return 0;
}