#include <iostream>
using namespace std;
int main() {
    int total_seconds;

    cout<<"Enter total seconds :";
    cin>>total_seconds;

    int hours = total_seconds/3600;
    int minutes =(total_seconds%3600)/60;
    int seconds = (total_seconds % 3600) % 60;

    cout<< hours<<":"<<minutes<<":"<<seconds;
}
