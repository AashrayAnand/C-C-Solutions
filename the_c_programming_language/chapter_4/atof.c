#include <stdio.h>
#include <ctype.h>
#define MAXLINE 5

double atof(char s[], int len);

int main(){
    int i;
    double value, atof(char[], int len);
    value = 0;
    char line[MAXLINE];
    for(i = 0; i < MAXLINE; i++)
        line[i] = i + '0';
    printf("%f\n", value += atof(line, sizeof(line) / sizeof(char)));
    return 0;
}

// atof is a utility function to convert
// a character string to a double
double atof(char s[], int len){
    printf("%d\n", len);
    double val, power;
    int i, sign;

    // using isspace utility function, iterate through
    // indices of character string as long as we encounter
    // whitespace
    for(i = 0; isspace(s[i]); i++)
    // check if the number is negative
        printf(" ");
    sign = (s[i] == '-') ? -1 : 1;
    // iterate through digit, add each successive
    // digit, and multiply the existing value by 10
    // to add a new digits column
    for(val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');
        printf("%f\n", val);

    while(i < len)
        if(s[i] == '.')
            i++;   
        // iterate through decimal places, adding
        // each one as a successive digit, and multiply
        // power by 10 for each digit, will use power
        // to divide value and get the correct number
        for(power = 1.0; isdigit(s[i]); i++)
            val = 10.0 * val + (s[i] - '0');
            power *= 10.0;
            printf("asd\n");
    printf("%f\n", power);
    return sign * val;
}