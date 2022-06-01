#include<iostream>
using namespace std;
int main(){
int num;
string result;
cout<<"Enter any number : ";
cin>>num;
result = (num%2 ==0 ) ? "Event" : "Odd";
cout<<num<<" is "<<result;
}