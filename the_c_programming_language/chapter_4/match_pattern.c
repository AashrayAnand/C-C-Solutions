#include <stdio.h>
#define MAXLINE 1000    /* max input line length */
int getLine(char s[], int lim);
int strIndex(char source[], char t[]);

char pattern[] = "ould"; /* pattern to search for */

int main(){
    char line[MAXLINE];
    int found = 0;

    // while the user provides a line of characters
    while(getLine(line, MAXLINE) > 0){
        // print the line of characters, if we find a given pattern
        if(strIndex(line, pattern) > 0){
            printf("%s", line);
        }
    }
}

int getLine(char s[], int lim){
    int c, i;

    i = 0;
    // while we haven't exceeded the input line limit and
    // we haven't encountered an EOF or newline character
    // from the user
    while(--lim > 0 && (c=getchar() != EOF && c != '\n'))
        // add character to current line 
        s[i++] = c;
    // add new line character, if last character wasn't
    // EOF
    if(c == '\n')
        s[i++] = c;
    s[i++] = '\0';
    return i;
}

int strIndex(char s[], char t[]){
    int i, j, k;

    // iterate through string until null terminator character
    for(i = 0; s[i] != '\0'; i++)
        // iterate while the pattern has characters, and the curr character
        // of the pattern, and a position in the given line s, are the same
        for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
        // if we iterated through the pattern and saw all the characters
        // in the line, return true
        if(k > 0 && t[k] == '\0')
            return 1;
    // we can use -1 to encode false for now
    return -1;
}