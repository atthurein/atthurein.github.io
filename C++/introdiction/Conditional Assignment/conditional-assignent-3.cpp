#include <iostream>
using namespace std;
int main (){
    int price;
    int quality;
    int total;
    int total_discount;
    cout<<"Enter price:  ";
    cin >> price;
    cout<<"Enter quality: ";
    cin >> quality;
    total = price * quality;
    if(total >= 5000){
        total_discount = total -(total * 10/100);
        cout << "Total Expense: "<<total_discount;

    }
    else{
        cout << "Total Expense: "<<total;
    }

}