#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// given a set of integer S = {1,2,...n}
// and a maximum value k, compute the maximum
// value of each of the bitwise operators and/or/xor, given
// 2 integers from S, such that the value is less than k
void calculate_the_maximum(int n, int k) {
    int i, j;
    int and_sum, or_sum, xor_sum;
    and_sum = or_sum = xor_sum = 0;
    for(i = 1; i <= n; i++){
        for(j = i + 1; j <= n; j++){
            if((i & j) < k && (i & j) > and_sum){
                and_sum = i & j;
            }
            if((i | j) < k && (i | j) > or_sum){
                or_sum = i | j;
            }
            if((i ^ j) < k && (i ^ j) > xor_sum){
                xor_sum = i ^ j;
            }
        }
    }
    printf("%d\n%d\n%d\n", and_sum, or_sum, xor_sum);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}