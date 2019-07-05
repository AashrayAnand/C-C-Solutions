#include <stdio.h>

int* compare_triplets(int* alice, int* bob){
    int *res = malloc(2*sizeof(int));
    int a = 0;
    int b = 0;
    int i;
    for(i = 0; i < 3; i++){
        if(*(alice + i) > *(bob + i)){
            a++;
        } else if (*(bob + i) > *(alice + i)){
            b++;
        }
    }
    *(res) = a;
    *(res + 1) = b;
    return res;
}

int main(){
    int alice[3];
    int bob[3];
    scanf("%d %d %d", &alice[0], &alice[1], &alice[2]);
    scanf("%d %d %d", &bob[0], &bob[1], &bob[2]);

    int *res = compare_triplets(&alice, &bob);
    printf("%d %d\n", *res, *(res + 1));
    return 0;
}