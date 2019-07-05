#include <stdio.h>

void swap(int* x, int* y);

int main(){
    int x,y;
    x = 10;
    y = 20;
    printf("%d   %d\n", x, y);
    swap(&x, &y);    
    printf("%d   %d\n", x, y);
} 

void swap(int* x, int* y){
    int temp = *y;
    *y = *x;
    *x = temp;
}