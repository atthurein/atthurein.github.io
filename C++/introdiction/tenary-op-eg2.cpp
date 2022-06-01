#include<iostream>
using namespace std;
int main(){
int time = 14;
string result = (time < 10) 
               ? "Good Morning" 
               : (time < 20 ? "Good Day" 
               : " good Evening");
cout<<result;
}