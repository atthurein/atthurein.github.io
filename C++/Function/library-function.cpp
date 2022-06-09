#include<iostream>
#include<cctype>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    cout << "------cctype lbaray function---:";
    cout <<"9 is alpha"<<isalpha('9');
    cout << "\n B is alpha:"<<isalpha('B');
    cout << "\n Lower case of  'A'"<<(char)tolower('A');
    cout<<"\n_______Functions of cMath library____\n\n";
    cout<<"3 power 5 is "<<pow(3,5)<<endl; //base=3,power=5
    cout<<"Square root of 36 is "<<sqrt(36)<<endl;
    cout<<"Value of sin(30) is "<<sin(30)<<endl;
    cout<<"Value of log(10) is "<<log(10)<<"\n\n";
    cout<<"\n_______Functions of iomanip library____\n\n";
    cout<<"Spring"<<setw(20)<<"Day"<<endl;
    cout<<"Love"<<setw(27)<<"Yourself"<<endl;
    return 0;
}

    
