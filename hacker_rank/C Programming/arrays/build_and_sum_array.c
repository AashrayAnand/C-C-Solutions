#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sum(int* arr, int n){
    int sum, i;
    sum = 0;
    for(i = 0; i < n; i++){
        sum += *(arr + i);
    }
    printf("%d", sum);
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, n;
    scanf("%d", &n);
    int* arr = (int*)malloc(n*sizeof(int));
    for(i = 0; i < n; i++){
        int k;
        scanf("%d", &k);
        *(arr + i) = k;
    }
    sum(arr, n);
    return 0;
}