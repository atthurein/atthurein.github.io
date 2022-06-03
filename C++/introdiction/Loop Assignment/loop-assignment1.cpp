#include<iostream>
using namespace std;
int main (){
    int snum,endnum;
    cout<<"Enter start number:";
    cin >> snum;
    cout << "Enter end number:";
    cin >> endnum;
   
    
    cout << "The number  divided by 8 and 5:\n";
    for (int i = snum ; i < endnum; i++)
    {
        
        if(i % 8 ==0 && i% 5== 0){
            
            cout << i <<"\n";
        }
        
    }
    
    cout<< " The numbers divided only 8: \n ";
    for (int i = snum; i< endnum; i++)
    {
        
        if(i % 8 ==0){
            
            cout <<i <<"\n";
        }
        
    }
    cout<< "The number dividerd only 5: \n ";
    for (int i = snum; i < endnum; i++)
    {
        
        if(i % 5 ==0){
            
             cout <<i <<"\n";
        }
        
    }
    
    
    cout<< " The numbers no divided 8 and 5 :\n ";
    for (int i = snum; i <endnum; i++)
    {
        
        if(i % 8 !=0 && i%5 !=0){
            
             cout <<i <<"\n";
        }
        
    }
    
    
    
   
    }
    
