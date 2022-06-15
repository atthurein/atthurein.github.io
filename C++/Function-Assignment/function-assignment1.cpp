#include<iostream>
using namespace std;
//Discount function start
void calculateDiscountItem(int price,int discount ){
    int total;
    
    total = price-(price * discount/100); 
    cout<<"After discount,price: "<<total;

}
//discount function end


//calculate intest function start
void calaulateIntest(int amount,int interestRate,int noOfMonths) {
    int month_interest=amount*interestRate/100;
    int interest = month_interest*noOfMonths;
    cout<<"\nMonthly Interest: "<<month_interest;
    cout<<"\nTotal Interest : " <<interest;
}
//calculate intest function end

//countZeroOccurences Functon start
void countZeroOccurences(){
    int num,no,countZero = 0;
     cout <<"\nHow many number you want to type:";
    cin >> num;
    for(int i = 0; i< num;i++){
        cout <<"Enter Number:";
        cin>>no;
        if(no == 0){
            countZero++;
        }
    }
    cout<<"Count Zero: "<<countZero;

}


//countZeroOccurences Functon end

int main (){
   
    //Discount Price
    int price,discount;

     cout<<"Enter Product Price: ";
    cin>>price;
    cout<< "Discount Value: ";
    cin>>discount;
    calculateDiscountItem(price,discount);
//Discount Price end

//Interest Rate start
int amount,interestRate,noOfMonths;
    cout<<"\nEnter Loan amount: ";
    cin>>amount;
    cout<<"\nEnter rate: ";
    cin>>interestRate;
    cout<<"\nEnter number of months: ";
    cin>>noOfMonths;
    calaulateIntest(amount,interestRate,noOfMonths);
//Interest rate end

//Count Zero Function call
countZeroOccurences();
//Count Zero Function call end




}