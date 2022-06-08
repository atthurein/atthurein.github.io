#include<iostream>
using namespace std;
int main (){
    int num[5];
    for(int i=0;i < 5;i++){
        cout << "Enter numbers: ";
        cin >> num[i];

    }
    cout <<"\nNumbers List: \n";
    for(int i =0;i < 5;i++){
        cout << num[i]<<"\n";

    }
    cout <<"\n The number is divisible by 3:\n";
    for(int i = 0; i< 5;i++){
        if(num[i] % 3 == 0){
            cout<<num[i] <<"\n";
        }
    }
}