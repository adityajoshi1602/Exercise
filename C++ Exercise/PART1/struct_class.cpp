#include<iostream>
/****Namespace**** --> Namespace provides a solution for preventing name conflicts
in large projects. Each entity needs a unique name, A namespace allows for
identically named entities as long as the namespaces are different . using
namespaces you could you same variables to difrent uses*/
using namespace std;


//#Example of namespaces
namespace first {
    int x=1;
}

/****Structure**** --> used to combine many data types */
//#Exmaple of structure
struct employee{
    int Eid;
    char Erating;
};
//you can call it as any variable using typedef
//there are many problem,s in classes to solve them classes are implanted
/*Problems in structure:
-->Members are public
-->no methods */



/****Class**** --> if you want to use fuction in structure the you could use class
there are 2 types in it :
1.privet :which will show only functions to user
2;public :which will run whole class code*/
class student
{
   public:
        int Id, workhour;
        char rating;
        void enterdata(int Id,char rating,int workhour);
        void show(){
            cout<<"Student Id "<<Id<<"\n";
            cout<<"Student rating "<<rating<<"\n";
            cout<<"Student Workhour "<<workhour<<"\n";
        }

};
//you can declare objects along with class
//class student{  sytax }student1,student2;
//Fuction to use in class
void student:: enterdata(int a,char b,int c){
    Id=a;
    rating=b;
    workhour=c;

};
//#OOP--> classes and objects  (c++ initially called as c with classes by staustrop)


int main (){
    /* --> if you'll define namespace in int main and not defining in cout it'll consider in
    defined namespace use it
    using namepsace first
    std::cout<<x; --> output = 1*/

    int x=0;
    cout<<"In std "<<x<<" in first namespace "<<first::x<<"\n\n";
    int p;
    char q;

    //using structure
    struct employee e1; //-->suppose employee name is e1
    cout<<"Enter Employee Id : ";
    cin>>p;
    cout<<"Enter Employee Rating : ";
    cin>>q;
    cout<<"\n";
    e1.Eid=p;
    e1.Erating=q;
    cout<<"Employee ID : "<<e1.Eid<<"\n";
    cout<<"Employee Rating : "<<e1.Erating<<"\n";

    cout<<"\n\n";


    //using class for student rohan
    int sid,wrh;
    char srate;
    cout<<"Enter student id : ";
    cin>>sid;
    cout<<"Enter Student Rating : ";
    cin>>srate;
    cout<<"Enter Student Workhour : ";
    cin>>wrh;
    cout<<"\n";
    student rohan;
    rohan.enterdata(sid,srate,wrh);
    rohan.show();

    return 0;
}