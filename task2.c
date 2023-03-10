// to input a line of sentence and check the total number of vowels,consonants and white spaces.

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[100];
    int v = 0, c = 0, w = 0;
    int i;
    printf("Enter the sentence :");
    fgets(s, 100, stdin);
    for (i = 0; s[i] != '\0'; i++){
        s[i]= tolower (s[i]);
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            v++;
        }

        else if (s[i] == ' ')
        {
            w++;
        }
        else
        {
            c++;
        }
    }
    printf("\nThe total vowels are %d\n", v);
    printf("The total consonants are :%d\n", c-w);
    printf("The number of the whitespace is: %d", w);

}