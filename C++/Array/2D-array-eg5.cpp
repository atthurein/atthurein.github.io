#include<iostream>
using namespace std;
int main (){
    int num[2][3];
    for(int r = 0;r< 2;r++){
        for(int c = 0; c < 3; c++){
            cout<< "Enter number["<<r<<","<<c<<"]: ";
            cin >>num[r][c];
        }
   }
   cout<<"\n---All Numbers-----\n";
   for( int r =0;r < 2;r++){
       for(int c =0; c< 3;c++){
           cout<<num[r][c]<<"\t";
       }
       cout<<"\n";
   }
   for(int c =0; c< 3;c++){
       int total = 0;
       for(int r = 0; r < 2; r++){
           total +=num[r][c];
       }
       cout<<"Sum of"<< (c+1)<<"column = "<<total;
       cout <<"\n";
   }

   for(int r =0; r< 2;r++){
       int totalRow = 0;
       for(int c = 0; c < 3; c++){
           totalRow +=num[r][c];
       }
       cout<<"Sum of"<< (r+1)<<"row = "<<totalRow;
       cout <<"\n";
   }
   return 0;

}