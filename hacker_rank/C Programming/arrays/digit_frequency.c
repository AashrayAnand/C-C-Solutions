#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isdigit(char ch){
    return ch >= '0' && ch <= '9';
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i, n;
    n = 10;
    int arr[n];
    for(i = 0; i < n; i++){
        arr[i] = 0;
    }
    char ch;
    while(scanf("%c", &ch) == 1){
        if(isdigit(ch)){
            int digit = ch - '0';
            arr[digit]++;
        }
    }
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}