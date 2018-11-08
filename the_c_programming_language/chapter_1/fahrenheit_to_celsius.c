#include <stdio.h>

void while_convertor(){
    float fahr, celsius;
    int lower, upper, step;

    
    lower = 0;  /* lower and upper temperature table limits */
    upper = 300;
    step = 20; /* temperature step size */

    fahr = lower;
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3.0f degrees fahranheit is equal to %6.1f degrees celsius\n", fahr, celsius);
        fahr += step;
    }
}

void for_convertor(){
    float fahr;
    for(fahr = 0; fahr <= 300; fahr += 20){
        printf("%3.0f degrees fahranheit is equal to %6.1f degrees celsius\n", fahr, (5.0/9.0) * (fahr-32));
    }
}

void reverse_convertor(){
        float fahr;
    for(fahr = 300; fahr >= 0; fahr -= 20){
        printf("%3.0f degrees fahranheit is equal to %6.1f degrees celsius\n", fahr, (5.0/9.0) * (fahr-32));
    }
}

main(){
    /* this program will output a simple fahranheit to celsius table */
    while_convertor();
    printf("===============================\n");
    /* this program does the same thing, but with only one variable */
    for_convertor();
    printf("===============================\n");
    /* this program prints the conversions in reverse order */
    reverse_convertor();
}