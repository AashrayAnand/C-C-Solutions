#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() : name("none") {}
Cat::Cat(string name) : name(name) {}
void Cat::jump(){
    cout << "jumped to the book shelf" << endl;
}