#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long aVeryBigSum(long* ar, int n) {   
    long sum = 0;
    int i;
    for(i = 0; i < n; i++){
        sum += *(ar + i);
    }
    return sum;
}

int main() {
    int i,n;
    long sum;
    scanf("%d", &n);
    long arr[n];
    for(i = 0; i < n; i++){
        scanf("%ld", &arr[i]);
    }
    sum = aVeryBigSum(&arr, n);
    printf("%ld", sum);
    return 0;
}
