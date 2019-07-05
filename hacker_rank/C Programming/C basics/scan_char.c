#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{  
    int MAX_LEN = 256;
    // declare a character, a string (char array)
    // and a second string
    char ch;
    char str[MAX_LEN];
    char s[MAX_LEN];
    // scan an input character
    scanf("%c", &ch);
    // scan an input word
    scanf("%s", &str);
    // scan an input sentence (words with spaces)
    scanf(" %[^\n]s", &s);
    // output the user input
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", s);
    return 0;
}