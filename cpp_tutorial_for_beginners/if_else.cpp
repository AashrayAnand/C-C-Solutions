#include <iostream>
using namespace std;

int main(){
    string password = "hello";
    cout << "Enter your password. " << flush;
    string input;
    cin >> input;
    if(input == password){
        cout << "correct!" << endl;
    } else {
        cout << "incorrect!" << endl;
    }

    int max = 10;
    cout << "enter your age "<< flush;
    int age;
    cin >> age;
    if(age == max){
        cout << "same as me!" << endl;
    } else if(age > max){
        cout << "older than me!" << endl;
    } else {
        cout << "younger than me!" << endl;
    }
    return 0;
}