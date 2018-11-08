#include <stdio.h>

int main(){
    int c, i, nWhite, nOther;
    int ndigit[10];

    nWhite = nOther = 0;
    while((c = getchar()) != EOF){
        if(c >= '0' && c <= '9'){
            ndigit[c - '0']++;
        } else if(c == ' ' || c == '\n' || c == '\t'){
            ++nWhite;
        } else{
            nOther++;
        }
    }
    printf("digits = ");
    for(i = 0; i < sizeof(ndigit)/sizeof(int); i++){
        printf(" %d", ndigit[i]);
    }
    printf(", white space = %d other characters = %d", nWhite, nOther);
    return 0;
}