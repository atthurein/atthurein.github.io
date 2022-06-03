#include<iostream>
using namespace std;
int main () {
    int mark1[] ={100, 90, 100};
    int mark2[] = {};
    int mark3[] = {100, 90, 88, 94};
    int mark4[] = {100, 12, 122, 22, 121,};
    cout<< " size of int :"<<sizeof(int)<<"bytes\n";
    cout<< " size of mark1 :"<<sizeof(mark1)<<"bytes\n";

    cout<<"\n Length of mark1:" <<sizeof(mark1)/sizeof(int);
}