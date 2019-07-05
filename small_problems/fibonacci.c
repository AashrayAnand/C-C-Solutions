#include <stdio.h>

void advance_digits(int* prev, int* curr);
void fib(int n);

int main(){
    int n;
    printf("What digit of the fibonacci sequence would you like?");
    // get the digit to which we will follow the
    // fibonacci sequence
    scanf("%d", &n);
    fib(n);
}

void advance_digits(int* prev, int* curr){
    int new;
    new = *prev + *curr;
    *prev = *curr;
    *curr = new;
}

void fib(int n){
    int prev, curr;
    prev = 0;
    curr = 1;
    printf("%d\n%d\n", prev, curr);
    while(n > 0){
        advance_digits(&prev, &curr);
        printf("%d\n", curr);
        n--;
    }
}