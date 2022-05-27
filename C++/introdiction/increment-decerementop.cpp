#include <iostream>
using namespace std;
int main() {
    int var1 = 5, var2 = 5;
     cout<<"\nvar1 = "<<var1;
    
    // int result = ++ var1 - 2;// 6-2;
    int result = var1++ -2;//5-2// var=6;
    cout<<"\nAfter increment, var1 ="<<var1;
    cout<<"\nResult ="<<var1;

    result =(var2--) - 2;//5-2//var2=4
    cout<<"\nAfter decrement, var2 ="<<var2;
    cout<<"\nResult ="<<result;
}