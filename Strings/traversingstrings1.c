#include <stdio.h>
//Traversing a String
//Example 1
void main()
{
    char s[13] = "cprogramming";
    int i = 0;
    int count = 0;
    while (i < 13)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
    {
        count++;
    }
    i++;
    }
    printf("The number  of vowels is: %d\n", count);
    return 0;
}