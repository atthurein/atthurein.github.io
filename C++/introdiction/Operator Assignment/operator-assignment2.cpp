#include<iostream>
using namespace std;
int main(){
    int total_days;
    cout<<"Enter number of days: ";
    cin>>total_days;
    int years = total_days/365;
    int months =(total_days%365)/31;
    int days =(total_days%365)%31;
    cout<<"\nYears: "<<years;
    cout<<"\nmonths: "<<months;
    cout<<"\ndays: " <<days;
}