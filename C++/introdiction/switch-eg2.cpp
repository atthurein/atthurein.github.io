#include<iostream>
using namespace std;
int main(){
char grade;
cout<<"Enter your grade : ";
cin>>grade;
switch(grade) {
case 'A' :
cout<<"Excellent!\n";
break;
case 'B' :
cout<<"Credit!\n";
break;
case 'C' :
cout<<"Well done!\n";
break;
case 'D' :
cout<<"You passed!\n";
break;
case 'E' :
cout<<"Better try again!\n";
break;
default :
cout<<"Invalid grade\n";
}
cout<<"Your grade is "<<grade;
}
