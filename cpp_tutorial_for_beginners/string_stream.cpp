#include <iostream>
#include <sstream>

using namespace std;

int main(){
    string one = "one";
    string two = "two";
    stringstream ss;
    ss << one << " " << two;
    cout << ss.str() << endl;
    return 0;
}