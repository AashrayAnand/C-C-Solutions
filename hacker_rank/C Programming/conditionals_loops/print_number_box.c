#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void print_border(int n){
    // print the top/bottom border
    for(int i = 0; i < (n-1)*2; i++){
        printf("%d ", n);
    }
    printf("%d\n", n);
}

void print_top_half(int n){
    for(int i = n - 1; i > 0; i--){
        // print left border
        printf("%d ", n);
        // print each number greater than the
        // current number once
        for(int j = n - 1; j > i; j--){
            printf("%d ", j);
        }
        // print the current number 
        for(int k = 0; k < (i - 1)*2; k++){
            printf("%d ", i);
        }
        printf("%d ", i);
        for(int l = i + 1; l < n; l++){
            printf("%d ", l);
        }
        // print right border and start newline
        printf("%d\n", n);
    }
}

void print_bot_half(int n){
    for(int i = 2; i < n; i++){
        // print left border
        printf("%d ", n);
        // print each number greater than the
        // current number once
        for(int j = n - 1; j > i; j--){
            printf("%d ", j);
        }
        // print the current number 
        for(int k = 0; k < (i - 1)*2; k++){
            printf("%d ", i);
        }
        printf("%d ", i);
        for(int l = i + 1; l < n; l++){
            printf("%d ", l);
        }
        // print right border and start newline
        printf("%d\n", n);
    }
}

// given a numerical value, prints out a pattern of this value
// and all smaller values, see example below, for n = 2, n = 3, and n = 5

/*

2 2 2
2 1 2
2 2 2

3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5

*/

void print_pattern(int n){
    print_border(n);
    print_top_half(n);
    print_bot_half(n);
    print_border(n);
}

int main() 
{

    int n;
    scanf("%d", &n);
    print_pattern(n);
  	// Complete the code to print the pattern.
    return 0;
}