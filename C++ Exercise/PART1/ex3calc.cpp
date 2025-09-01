//you can use math functions for details you could check www.cplusplus.com site 
//to see math functions 

/*Building calculator using C++*/

#include<iostream>
using namespace std; 
//Function of calculator 
int calc(int a,int b)
{
    char x;
    float res;

    for (int i=0;i<=15;i++){
        cout<<"*";
    }
    cout<<"CALCULATOR";
    for (int i=0;i<=15;i++){
        cout<<"*";
    }
    cout<<"\n";
    cout<<"\n";
    
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;

    cout<<"Enter any operator (+,-,*,/,%) : ";
    cin>>x;
    cout<<"\n";

    switch(x){
        case '+':
        res=a+b;
        cout<<"Sum is : "<<res;
        break;
        case '-':
        res=a-b;
        cout<<"Diffrence is : "<<res;
        break;
        case '*':
        res=a*b;
        cout<<"Multiple is : "<<res;
        break;
        case '%':
        res=a%b;
        cout<<"Reminder is : "<<res;
        break;
        case '/':
        res=a/b;
        cout<<"Result is : "<<res;
        break;
        

    }
    return 0;
}

int main (){
    int a,b;
   
    calc(a,b);
    return 0;
}