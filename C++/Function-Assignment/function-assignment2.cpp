#include<iostream>
using namespace std;
void verifyEvenOrOdd(){
   int num;
   cout<<"Please Enter None  Zero Number :";
   cin >> num;
   
   if(num == 0){
    cout<< num << " is Zero";
   }else if(num%2 == 0){
    cout<<num<< " is an Even Number ";
   }else{
    cout<< num << " is an Odd Number";

   }
}
void verifyNegativeOrPositive() {
    int number;
    cout << "Enter Number:";
    cin >> number;
    if ( number > 0)
        {
            cout << number << "is a Positive Number";
        }
    else if (number < 0){
         cout << number << "is a Negative Number";
    }
    else{
        cout << number <<" is Zero";  
    }
       
        
        
}
void displayMultiplication (int number) {
    int multiplier;
    for ( multiplier = 1 ;multiplier <= 10; multiplier++){
        cout <<number <<" * " << multiplier <<" = " << (number * multiplier) <<endl;
    }

}
bool checkLoing(string username, string pass) {
     return (username == "mmit" && pass == "admin") ? true: false;

 }

int main() {
     int input,confim;
     tryAgain:
    cout << "1. Verify Even or Odd\n";
    cout << "2. Verify Possitive or Negative\n";
    cout << "3. Multiplication\n";
    cout << "4. Check Login\n";
    cout << "Choose Input 1 ~ 4 :";
     cin >> input;
     if(input == 1){
        verifyEvenOrOdd();
     }
    
    else if(input == 2){
        verifyNegativeOrPositive();
    }
    
     else if (input == 3){
        int num;
    cout << "Enter Multi Number:";
    cin >> num;
    displayMultiplication(num);
    
    }
    else if(input == 4){
     // //Check Login start
    string name,pass;
     cout << "Enter User Name: ";
     cin >> name;
     cout <<"Enter password: ";
     cin >> pass;
     bool result = checkLoing(name, pass);
     if(result == 1)
     cout <<"Login Sucess...";
     else
     cout <<"Invalid login...";
    //  // Check Login end
    }
    cout << "\nIf you want to continue,press '1' :";
    cin >> confim;
    if (confim == 1){
        goto tryAgain;
    }


    return 0;
 
}