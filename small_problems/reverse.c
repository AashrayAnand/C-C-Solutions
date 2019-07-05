#include <stdio.h>

int length(char *);
void reverse(char *);

int main(){
    char s[] = "abcdefghijklmnopqrstuvwxyz";

    printf("Starting string is %s\n", s);
    reverse(s);
    printf("Reversed string is %s\n", s);
}

void reverse(char *s){
    int i, len;
    len = length(s);
    // use start/end pointers to swap values, storing
    // the actual values in temp to help this step
    char *start, *end, temp;
    start = s;
    // set end pointer to starting pointer, incremented by
    // length of string (pointer arithmetic)
    end = s + len - 1;
    // iterate over half the length of swing, successively
    // swapping the nth character from front and back, and
    // incrementing/decrementing these pointers respectively
    for(i = 0; i < len / 2; i++){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int length(char *s){
    // given a char pointer, iterates until
    // we reach a null terminator, indicates
    // the length of the given string
    int i = 0;
    while(*(s + i) != '\0'){
        i++;
    }
    return i;
}
