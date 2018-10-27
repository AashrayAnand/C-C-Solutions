#include <iostream>
using namespace std;

int main(){
    int numCats = 5;
    cout << "number of cats = " << numCats << endl;
    numCats++;
    cout << "after getting another cat, the number of cats = " << numCats << endl;
    string value = "number of cats = ";
    cout << "we now have a string for the previous statement" << endl;
    cout << value << numCats << endl;
    return 0;
}