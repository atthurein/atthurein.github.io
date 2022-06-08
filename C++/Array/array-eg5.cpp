#include<iostream>
using namespace std;
int main () {
    int mark[] ={100,90, 78};
    string names[3] ={"Aung Aung", "May", "Cherry"};
    cout<<"----Mark List----\n:";
    for (int i = 0; i < 3; i++)
    {
      cout <<mark[i] <<"\n";
    }
    cout << "\n ---Name List----\n:";
    for (int i = 0; i < 3; i++)
    {
        cout << names[i]<<"\n";
    }
    cout <<"\n---Name with mark List---\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<names[i]<<" got "<<mark[i]<<"marks:\n";
    }
    
    
    
}