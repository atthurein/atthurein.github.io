#include <iostream>
using namespace std;
int main (){
      const string NAME = "athurein";
    const string PASSWORD = "athurein1234";
    string username;
    string userpassword;
    cout << "Enter user name: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> userpassword;
    if(username == NAME && userpassword == PASSWORD){
        cout<< "Longin success: ";

    }else if(username == NAME){
        cout << "Only user name match.";
    }else if(userpassword == PASSWORD){
        cout <<"Only passsword match: ";

    }else{
        cout << "Both user name and password do not match.";
    }

}