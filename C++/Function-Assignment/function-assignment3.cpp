#include<iostream>
using namespace std;
int max(int a, int b, int c) {
    int max_num = a;

    if(max_num < b)
       max_num = b;
    if(max_num <  c)
    max_num = c;   
    return max_num;

}
int min(int a, int b, int c) {
    int min_num = a;

    if(min_num > b)
       min_num = b;
    if(min_num >  c)
    min_num = c;   
    return min_num;

}
int main () {
    int n1,n2,n3;
    cout<<"\nEnter three numbers: ";
    cin>> n1>>n2>>n3;
    cout<<"\nMax number is "<<max(n1,n2,n3);
    cout<<"\nEnter three numbers: ";
    cin>> n1>>n2>>n3;
    cout<<"\nMin number is "<<min(n1,n2,n3);
}