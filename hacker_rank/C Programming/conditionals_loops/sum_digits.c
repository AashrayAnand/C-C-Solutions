#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// given an input number, successively add
// its least significant digit to a sum, and
// divide by 10 to remove the least significant digit
// then, return sum
int digit_sum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int main() {
	
    int n;
    scanf("%d", &n);
    // given an input integer, calculate and output the sum of
    // the digits of a number
    int sum = digit_sum(n);
    printf("%d", sum);
    return 0;
}