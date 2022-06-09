#include<iostream>
using namespace std;
int salaries[5]={100000,500000,900000,1200000,350000000};

int findMaxSalary() {
    int max_sal = salaries[0];
    for (int i =1;i< 5;i++) {
        if(max_sal < salaries[i])
        max_sal = salaries[i];
    }
    return max_sal;
}
int getTotalSalary() {
    int total = 0;
    for(int i =0;i < 5;i++){
        total += salaries[i];
    }

    return total;
}
int main() {
    int result = findMaxSalary();
    cout << "Maximum salary: "<<result;
    cout << "\nTotal salary: "<<getTotalSalary();
    return 0;
}