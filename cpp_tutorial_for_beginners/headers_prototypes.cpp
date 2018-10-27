#include <iostream>
#include "Cat.h"
#include "Box.cpp"
using namespace std;


int main(){
    Cat cat;
    cat.jump();
    Box b;
    Box newBox(1,2,3);
    b = newBox;
    cout << b << endl;
    Box box;
    box = Box();
    cout << box << endl;
    return 0;
}