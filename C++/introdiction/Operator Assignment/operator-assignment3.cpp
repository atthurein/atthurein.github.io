#include<iostream>
using namespace std;
int main(){
    int amount,rate,month;
    cout<<"Enter Loan amount: ";
    cin>>amount;
    cout<<"Enter rate: ";
    cin>>rate;
    cout<<"Enter number of months: ";
    cin>>month;
    int month_interest=amount*rate/100;
    int interest = month_interest*month;
    cout<<"\nMonthly Interest: "<<month_interest;
    cout<<"\nYou Interest is: " <<interest;


}