#include <iostream>

using namespace std;

void swap(double *ptr1, double *ptr2){
    // swap values of doubles stored at these 2 pointers
    // store value at the address stored in ptr1, by
    // dereferencing it (*ptr1) as a temp, update
    // value at address stored by ptr1 to value
    // at address stored by ptr2, finally, update
    // value at address stored by ptr2 to the 
    // temp value that was the original value
    // at the address stored by ptr1
    double temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
void manipulate(double *pValue){
    cout << "value stored at address of dValue pointer = " << *pValue << endl;
    *pValue = 10;
    cout << "value stored at address of dValue pointer after update = " << *pValue << endl;
}

int main(){
    int nValue = 8;

    int* pnValue = &nValue;
    cout << "the integer value will be the value of nValue" << endl;
    cout << "the pointer value will be the address which stores the value of nValue" << endl;
    cout << "the integer value = " << nValue << ", the pointer value = " << pnValue << endl;
    cout << "we can get the int value via the pointer, by dereferencing the pointer" << endl;
    cout << "dereferencing the pointer results in ..." << *pnValue << endl;

    double dValue = 20.0;
    cout << "before manipulating value of pointer to dValue, dValue = " << dValue << endl;
    manipulate(&dValue);
    cout << "after manipulating value of pointer to dValue, dValue = " << dValue << endl;
    double d1 = 23;
    double d2 = 53;
    cout << "before swapping, d1 = " << d1 << " d2 = " << d2 << endl;
    swap(&d1, &d2);
    cout << "after swapping, d1 = " << d1 << " d2 = " << d2 << endl;
    return 0;
}