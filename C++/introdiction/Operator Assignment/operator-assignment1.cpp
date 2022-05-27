#include<iostream>
using namespace std;
int main(){
    int amount,discount,total;
    
    cout<<"Enter Product Price: ";
    cin>>amount;
    cout<< "Discount Value: ";
    cin>>discount;
    total = amount-(amount * discount/100); 
    cout<<"After discount,price: "<<total;

}