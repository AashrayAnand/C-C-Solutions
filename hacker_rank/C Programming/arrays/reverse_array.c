#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int j, k;
    i = 0;
    j = num - 1;
    while(i < j){
        // save value at ith memory location of
        // array in temp variable
        int temp = *(arr + i);
        // save value at jth memory location of 
        // array in ith memory location
        *(arr + i) = *(arr + j);
        // save temp value at jth memory location
        // thus, swapping the values
        *(arr + j) = temp;
        i++;
        j--;
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}