#include <iostream>
using namespace std;

int main(){
    if(1 > 0){
        cout << "evaluated if statement to true" << endl;
    } else if(1 == 0){
        cout << "evaluated if statement to elif condition" << endl;
    } else {
        cout << "evaluated if statement to else condition" << endl;
    }
    int i = 0;
    while(i < 100){
        cout << "i is now equal to: " << i << endl;
        i++;
    }

    const string password = "hello";
    string input;
    do {
        cout << "Enter your password" << flush;
        cin >> input;
        if(input != password){
            cout << "incorrect!" << endl;
        }
    } while(input != password);

    for(int i = 0; i < 100; i++){
        cout << "for loop iteration #" << i << endl;
    }

    int values[10];
    for(int i = 0; i < sizeof(values)/sizeof(int); i++){
        values[i] = i*2;
    }

    for(int i = 0; i < sizeof(values)/sizeof(int); i++){
        cout << "ith value of array is: " << values[i] << endl;
    }

    int defined_values[10] = {1,2,3,4,5,6,7,8,9,10};

    string animals[][3] = {
    {"fox", "dog", "cat"},
    {"mouse", "squirrel", "parrot"}
    };

    for(int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++){
        for(int j = 0; j < sizeof(animals[0]) / sizeof(string); j++){
            cout << animals[i][j] << endl;
        }
    }

    int value = 5;
    switch(value){
        case 1:
            cout << "value is 1" << endl;
        case 2:
            cout << "value is 2" << endl;
        case 3:
            cout << "value is 3" << endl;    
        case 4:
            cout << "value is 4" << endl;    
        case 5:
            cout << "value is 5" << endl;
    }

    return 0;
}