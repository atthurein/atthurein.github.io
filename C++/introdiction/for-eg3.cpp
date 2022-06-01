#include<iostream>
using namespace std;
int main(){
int start_num;
int end_num;
int total = 0;
int count_val = 0;
float avg_val;
cout<<"Enter start number : ";
cin>>start_num;
cout<<"Enter end number : ";
cin>>end_num;
for(int i = start_num; i <= end_num; i++){
    total=total + i;
count_val++;
}
avg_val = (float)total/count_val;
cout<<"\nTotal = "<<total;
cout<<"\nCount = "<<count_val;
cout<<"\nAverage = "<<avg_val;
}
