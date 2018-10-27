#include <iostream>
using namespace std;

int main(){

    cout << "Enter your name. " << flush;
    string name;
    cin >> name;
    cout << "Your name is: " << name << endl;
    cout << "Nice to meet you " << name << " when do u graduate? " << flush;
    int year;
    cin >> year;
    cout << "Nice to meet you " << name << " I too graduate in " << year << endl;
    return 0;
}