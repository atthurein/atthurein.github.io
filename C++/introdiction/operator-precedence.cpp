#include <iostream>
using namespace std;
int main() {
    int a = 13, b = 20, c =30, d = 40;
    int e;
    e = (a + b) * c / d; 33 * 30 / 40;
    cout<<"\n(a+b) * c / d; 33 * 30 / 40 is"<<e;
     e = ((a + b) * c) / d; 33 * 30 / 40;
     cout<<"\n((a + b) * c) / d is" <<e;
     e = (a + b) * (c /(float) d);//33 * 30.0/40.0
     cout<<"\n  e = (a + b) * (c / d)"<<e;

    
}
