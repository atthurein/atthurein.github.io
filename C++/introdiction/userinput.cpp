#include <iostream>
using namespace std;

int main() {
  int emp_no;
  string name;
  string city;
  float salary;
  char ch;
  cout<<"----User Input ---\n";
  cout<<"Enter employee no: ";
  cin>>emp_no;
  cin.ignore();//noted
  cout<<"Enter name";
  getline(cin,name);
  cout<<"Enter city";
  cin>>city;
  cout<<"Enter Salary";
  cin>>salary;
  cout<<"Enter any single character";
  cin>>ch;
  cout<<"EmpNo: "<<emp_no;
  cout<<"\nEmployee name: "<<name;
  cout<<"\nCity: "<<city;
  cout<<"\nSalary "<<salary<<" ks. ";
  cout<<"\nCharacter"<<ch;


}

