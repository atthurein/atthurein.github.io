#include<iostream>
using namespace std;
int main(){
    int mark[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter mark: "<<(i+1)<<":";
        cin >> mark[i];
    }
    cout <<"\n---Mark List----\n";
    int i=0;
    while (i<3)
    {
        cout << mark[i]<<"\n";
        i++;
    }
    i = 0;
    int total = 0;
    do
    {
        total = total + mark[i];
        i++;
    } while (i < 3);
    cout <<"Sum: "<< total<<"mark\n";
    cout<<"Average: "<<(total/3.0)<<"marks.";
    return 0;
    
    
    
}