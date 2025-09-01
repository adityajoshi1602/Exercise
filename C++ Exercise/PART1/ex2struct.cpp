#include<iostream>
using namespace std; 
//Building Structure with static variable to count numbers of employee
class Employee
{
    int id;
    static int count;
    
    public:
        void setdata(void);
        void getdata(void);
        

};
void Employee::setdata(void){
    cout<<"Enter your id : ";
    cin>>id;
    count++;
    
};
void Employee::getdata()
{
    cout<<"Your Employee id is : "<<id<<" | count is "<<count<<"\n";
};
int Employee::count;

int main (){
    
    Employee e1,e2,e3;
    e1.setdata();
    e1.getdata();
    e2.setdata();
     
    e2.getdata();
    e3.setdata();
   
    e3.getdata();



    return 0;
}