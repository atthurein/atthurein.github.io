#include<iostream>
using namespace std;
int main(){
float bmi;
cout<<"Enter your bmi value: ";
cin>>bmi;
if(bmi < 18.5){
cout<<"Underweight";
}
else{//bmi >= 18.5
if(bmi >= 18.5 && bmi <= 24.9){
cout<<"Normal Weight";
}
else{
if(bmi >= 25 && bmi <=29.9){
cout<<"Overweight";
}
else{
cout<<"Obesity";
}
}
}
}
