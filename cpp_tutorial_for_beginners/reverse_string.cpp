#include <iostream>
using namespace std;
// given pointers to two char values
// swap their values
void swap(char *first, char *last){
    char temp = *first;
    *first = *last;
    *last = temp;
}


void reverse_array(int *arr){
    int *ptrStart = arr;
    int nElems = sizeof(&arr);
    cout << nElems << endl;
    int *ptrEnd = arr + nElems - 1;
    while(ptrStart < ptrEnd){
        cout << "value referenced by ptr start: " << *ptrStart << " " << endl;
        int temp = *ptrStart;
        *ptrStart = *ptrEnd;
        *ptrEnd = temp;
        ptrStart++;
        ptrEnd--;
    }
    cout << endl;
}

// given a reference to a string, 
// iterate through it and reverse
// its letters, using swap
void reverse(string &str){
    int n = str.length();
    for(int i = 0; i < n / 2; i++){
        cout << str << endl;
        char *ptr = &str[i];
        swap(&str[i], &str[n-i-1]);
    }
}

void reverse_char_array(){
    char text[] = "hello";
    char *pStart = text;
    int nChars = sizeof(text) - 1;
    char *pEnd = text + nChars - 1;
    cout << text << endl;
    while(pStart < pEnd){
        char temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;
        pStart++;
        pEnd--;
    }
    cout << text << endl;
}

int main(){
    string str_to_reverse = "this is a string in its original order";
    // reverse a string with a for loop
    reverse(str_to_reverse);
    cout << "since we edit a copy, and not a reference, the string remains..." << str_to_reverse << endl;
    // reverse a string with a while loop
    reverse_char_array();

    return 0;
}