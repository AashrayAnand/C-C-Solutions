#include <iostream>

using namespace std;

int main(){
    string texts[] = {"one", "two", "three"};

    string *pTexts = texts;

    for(int i = 0; i < sizeof(texts)/sizeof(string); i++){
        cout << pTexts[i] << " " << flush;
    }
    
    cout << endl;

    for(int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++){
        cout << *pTexts << " " << flush;
    }

    cout << endl;

    string *ptrStart = texts;
    string *ptrEnd = &texts[2];
    while(ptrStart <= ptrEnd){
        cout << *ptrStart << " ";
        ptrStart++;
    }

    cout << endl;

    return 0;
}