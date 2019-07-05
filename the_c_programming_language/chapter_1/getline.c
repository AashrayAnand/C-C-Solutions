#include <stdio.h>
#define MAXLINE 1000    /* max input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while(len = getline(line, MAXLINE) > 0){ /* while line is not empty */
        if(len > max){
            max = len;
            copy(longest, line); /* copy values to longest char array */
        }
    }
    if(max > 0){ /* if there was a line */
        printf("%s", longest);
    }
    return 0;
}

int getline(char line[], int lim){
    int c, i;

    /* while we are still receiving valid characters and havent reached the limit length */
    for(i = 0; i < lim - 1 && (c = getchar() != EOF && c != '\n'); i++){
        /* add character to ith index of char array */
        line[i] = c;
    }
    /* add new line character if seen */
    if(c == '\n'){
        line[i] = c;
        ++i;
    }
    /* end char array with terminating character */
    line[i] = '\0';
    return i;
}

/* copy over characters to new array */
void copy(char to[], char from[]){
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
}