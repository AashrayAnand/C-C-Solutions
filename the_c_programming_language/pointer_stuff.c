#include <stdio.h>

int func(int*);

int main(){
    int p;
    p = 10;
    printf("%d\n", p);
    int q = func(&p);
    printf("%d\n", q);
    printf("%d\n", p);
}

int func(int* p){
    *p = *p+1;
    return *p+3;
}