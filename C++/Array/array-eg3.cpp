#include<iostream>
using namespace std;
int main(){
int mark[5] = { 100, 50, 60, 50, 90 };
int m = mark[0];
cout<<m<<"\n";
cout<<mark[1]<<"\n";
cout<<mark[2]<<"\n";
cout<<mark[3]<<"\n";
cout<<mark[4]<<"\n";
mark[4] = 100; // assign value to array
cout<<"After changing value, mark[4] = "<<mark[4]<<"\n";
int total = mark[0] + mark[1] + mark[2] + mark[3] + mark[4];
cout<<"Total value is "<<total;
}