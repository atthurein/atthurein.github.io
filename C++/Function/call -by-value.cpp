#include<iostream>
using namespace std;

void changeValue(int val) {
    val = val + 20;
    cout<< "\n Value inside function: "<<val;
}
 void changeValueAnother(int *val){
     *val = *val + 20;
     cout<<"\nValue inside function: "<<(*val);
 }
 int main (){
     int num = 10;
     int num1 = 10;
     cout <<"\n----Call by Vaue----\n:";
     cout<<"Before calling num ="<<num;
     changeValue(num);
     cout << "\nAfter calling num="<<num;
     cout <<"\n----Call by Reference----\n:";

 }