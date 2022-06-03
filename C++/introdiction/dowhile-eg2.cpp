#include<iostream>
using namespace std;
int main(){
int num;
cout<<"If you enter zero, program will terminate!\n";
do{
cout<<"\nEnter number : ";
cin>>num;
if(num < 0){
cout<<num<<" is negative number";
}
else if(num > 0){
cout<<num<<" is positive number";
}
}while(num != 0);
}