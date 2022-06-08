#include<iostream>
using namespace std;
int main (){
    int barcode[4];
    int barcode_search;
    string itemName[4];
    float itemPrice[4];
    for(int i = 0; i < 4; i++){
        cout << "Enter Barcode: ";
        cin >> barcode[i];
        cout << "Enter Item Name: ";
        cin >> itemName[i];
        cout << "Enter Item Price: ";
        cin >> itemPrice[i];

    }
    cout<<"----All Items----:\n";
    cout <<"Code"<<"\t"<<"Item Name"<<"\t"<<"Price\n";
    for(int i = 0; i < 4; i++){
        cout << barcode[i] <<"\t";
        cout << itemName[i] <<"\t"<<"\t";
        cout << itemPrice[i] <<"\t"<<"\n";
    }
    cout << "\n-----Item Price (price > 300)---\n";
    int price = -1;
    for(int i = 0;i < 4;i++){
        if(itemPrice[i] > 300){
            cout << itemName[i]<<"\t"<< itemPrice[i]<<"\n";
            price = i;
        }
    }
    if(price == -1){
        cout<<"Does not exit..\n";
    }
    
    cout << "Enter Barcode: ";
    cin >> barcode_search;
    int index = -1;
    for(int i = 0;i < 4; i++){
        if(barcode_search == barcode[i]){
            // cout <<"Code:"<<barcode_search<<"\n";
            // cout <<"Name:"<<itemName[i]<<"\n";
            // cout << "Price:" <<itemPrice[i];
            index = i;
            break;
        }
    }
    if(index == -1){
        cout<<"Code-"<<barcode_search<<" is not foound\n";
    }else{
         cout <<"Code:"<<barcode_search<<"\n";
            cout <<"Name:"<<itemName[index]<<"\n";
            cout << "Price:" <<itemPrice[index];
    }
    

}