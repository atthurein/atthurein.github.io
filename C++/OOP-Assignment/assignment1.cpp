#include<iostream>
using namespace std;

class Employee {
    private:
      int empno;
      string rank;
      string department;
      int salary;
    public:
      Employee () {
        empno = 0;
        rank = "";
        department = "";
        salary = 0;
      } 
    Employee(int empno, string rank,string department, int salary) {
        this->empno = empno;
        this->rank = rank;
        this->department = department;
        this->salary = salary;

    } 
   void showData(){
    cout<<"\n";
    cout<<"\nEmployee Number: "<<empno;
    cout <<"\nEmployee Rank: "<<rank;
    cout <<"\nEmployee Department: "<<department;
    cout <<"\nEmployee Salary: "<<salary;
   }  

};

int main () {

    Employee employees[5];
  int empno;
  string emprank;
  string empdepartment;
  int salary;
  for(int i =0;i<5;i++) {
    cout <<"\nEnter data for Employee "<<(i + 1)<<":\n";
    cout <<"Enter Employee Number: ";
    cin >> empno;
    cout <<"Enter Employeee Rank: ";
    cin>> emprank;
    cout << "\nEnter Employee Department:";
    cin >>empdepartment;
    cout << "Enter Employee Salary:";
    cin >>salary;
    employees[i]=Employee(empno,emprank,empdepartment,salary);

  }
  cout<<"\n-----Employeee Information---\n";
  for(int i = 0;i<5;i++){
    employees[i].showData();
  }

    return 0;
}