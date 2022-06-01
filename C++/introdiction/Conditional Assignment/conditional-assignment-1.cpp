#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter non-zero nuumber: ";
    cin>> num;
    if(num%2 == 0){
        cout<< "Num is even: ";
    }
    else{
        cout<< "Num is odd: ";
    }
}