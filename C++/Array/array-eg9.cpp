#include<iostream>
using namespace std;
int main () {
    string brands[4] = {"iPhone", "Samsung","Vivo","Mi"};
    string search_name;
   int index = -1;
    cout << "Enter brands to search: ";
    cin >>search_name;
    for (int i = 0; i < 4; i++)
    {
        if(search_name == brands[i]){
            index =i;
            break;
        }
    }
    if (index == -1)
    {
        cout <<search_name<<" is not found! ";

    }else{
        cout<<search_name<<" is foung at "<<index;
    }
    return 0;
    
}