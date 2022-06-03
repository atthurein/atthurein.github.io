#include<iostream>
using namespace std;
int main (){
    int num,remainder,sum=0;
    cout<< "Enter number: ";
    cin>> num;
    while (num>0)
    {
        remainder =num % 10;
        sum = sum + remainder;
        num = num / 10;
        
       

    }
     
    cout <<"Total: "<<sum;
    
}