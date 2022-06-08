#include<iostream>
using namespace std;
int main(){
    int numbers[3] = {50,88,70};
    cout << "\n--- All numbers----\n";
    for (int i = 0; i < 3; i++)
    {
        cout << numbers[i]<<"\t";
    }
    int max_num = numbers[0];
    for (int i = 0; i < 3; i++)
    {
        if (max_num < numbers[i])
         max_num = numbers[i];
        
    }
    cout << "\nLargest number: "<<max_num;
    // cout << "\nSmallest number: "<<numbers;


    return 0;
    
}