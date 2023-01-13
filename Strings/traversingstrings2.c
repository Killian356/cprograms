#include <stdio.h>
//Traversing strings and utilizing null character (Vowel Counting)
void main()
{
    char s[13] = "cprogramming";
    int i = 0;
    int count = 0;
    while (s[i] != NULL)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
        {
            count++;
        }
        i++;
    }
    printf("The number of vowels is: %d\n", count);
    return 0;
}