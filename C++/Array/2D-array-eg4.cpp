#include<iostream>
using namespace std;
int main (){
    int num[2][3];
    for(int r = 0;r< 2;r++){
        for(int c = 0; c < 3; c++){
            cout<< "Enter number["<<r<<","<<c<<"]: ";
            cin >>num[r][c];
        }
        cout<<"\n---All Numbers-----\n";
        int total = 0;
        for(int r = 0; r < 2; r++){
            for(int c =0; c< 3;c++){
                cout << num [r][c]<<"\t";
                total += num[r][c];

            }
            cout<<"\n";
        }
        cout <<"Sum"<<total;
    }
}