#include <iostream>
using namespace std;
// global Variable declaration: (global variable)
int a = 10;
// inside function Var declaration:(local variable)
void display(){
int a=20;
cout<<"value of a inside fun : "<<a<<"\n";
}
// inside function parameter declaration:(formal parameter)
void displayAnother(int a){
cout<<"value of a inside function parameter : "<<a<<"\n";
}
int main () {
cout<<"value of a : "<<a<<"\n";
display();
displayAnother(30);
}