#include<iostream>
using namespace std;
class Student {
    private:
      int rno;
      string name;
      string couse;
    public:
      Student() {
        rno = 0;
        name ="";
        couse= "";
      }  
      void setRno(int rno){
        this->rno = rno;

      }
      int getRno(){
        return rno;
      }
    void setName(string name) {
        this->name = name;
    }  
    string getName(){
        return name;
    }
   void setCouse(string couse){
    this->couse = couse;

   } 
   string getCouse(){
    return couse;

   }
   int search(){
         return rno;
      }
   void showData(){
        cout <<"\n";
        cout <<this->rno<<"\t";
        cout <<this->name<<"\t";
        cout <<this->couse<<"\n";

      }
      
};


int main () {
    Student students[5];
    int stuRno;
    string stuName;
    string stuCouse;
    for(int i = 0;i<5;i++){
        cout<<"\nEnter data for Student "<<(i + 1)<<":\n";
        cout <<"Enter Student Roll Number: ";
        cin>>stuRno;
        cout <<"Enter Student Name: ";
        cin >>stuName;
        cout <<"Enter Student Couse: ";
        cin >>stuCouse;
        students[i].setRno(stuRno);
        students[i].setName(stuName);
        students[i].setCouse(stuCouse);
    }
    cout <<"\n------Student list-----\n";
    for(int i = 0; i<5;i++) {
        students[i].showData();
        
    }
    int no,r;
    r = -1;
    cout<<"\nSearch Students Roll Numbers:";
    cin>>no;
    for(int i =0; i<5;i++){
         if(no == students[i].search()){
          r = i;
         }
    }
    if(r!= -1){
      students[r].showData();
    }
    else
    {
      cout<<"\nStudents Roll Numbers not exit...";
    }



    return 0;
}