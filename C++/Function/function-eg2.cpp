#include<iostream>
using namespace std;
void checkLogin() {
    string email,pass;
    
    input:
    cout << "\nEnter email: ";
    cin >> email;
    cout <<"Enter password: ";
    cin>>pass;

    if(email =="jk@gamil.com" && pass == "123")
    cout <<"\nLogin sucess...";
    else{
        int num;
        cout <<"\neamil and password do not match.\n";
        cout<<" If you want to try agian,press 1:";
        cin>>num;
        if(num == 1)
            goto input;
        
        
    }

}
int main() {
    checkLogin();
    return 0;
}