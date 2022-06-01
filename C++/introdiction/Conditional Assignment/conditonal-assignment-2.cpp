#include <iostream>
using namespace std;
int main (){

    int num;
    cout <<"Enter non-zero number: ";
    cin >> num;
    if(num<0){
        cout << num <<"\tis negative number.";
    }
    else{
        cout << num << "\tis positive number.";
    }
}