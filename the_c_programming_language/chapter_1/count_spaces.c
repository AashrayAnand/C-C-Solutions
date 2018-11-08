#include <stdio.h>

int main(){
    int space_count = 0;
    char c;
    while((c = getchar()) == '\t' || c == '\n' || c == ' '){
        space_count++;
    }
    printf("%d characters were a newline, tab, or space", space_count);
    return 0;
}