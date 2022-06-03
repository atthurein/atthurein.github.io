#include<iostream>
using namespace std;
int main () {
    int no,num, countPositive=0,countNegative=0,countZero=0;
    cout <<"How many number you want to type:";
    cin >> num;
    for  (int i = 0; i < num; i++)
    {
        cout << "Enter Number:";
        cin >> no;
            if (no>0){
                countPositive++;

            }
            if (no==0){
                countZero++;

            }
            if (no<0){
                countNegative++;

            }
    }
    cout << "Number of Positive:"<<countPositive << endl;
    cout << "Number of Zero:" <<  countZero<<endl;
    cout<< "Number of Negative"<< countNegative<<endl;

    
    
}