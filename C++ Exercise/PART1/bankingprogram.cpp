#include<iostream>
#include<ctime>
using namespace std; 

class bank
{
   
    private:
        void showbal();
        void withdraw();
        void depo();
        int avlbal;
    public:
        void welcome();

   

    
    
};
void bank::welcome(){
     for (int i=0;i<16;i++){
        cout<<"*"; 
    }
    cout<<" WELCOME ";
    for (int i=0;i<16;i++){
        cout<<"*"; 
    }
    cout<<"\n\n";
    int accnum;
    int choice;
    cout<<"******Enter Your Account Number******"<<"\n";
    cin>>accnum;
    cout<<"\n\n";
    cout<<"******Enter Your Choice******"<<'\n';
    cout<<"1. Show Available Balance "<<"\n";
    cout<<"2. Withdraw Cash "<<"\n";
    cout<<"3. Deposite Cash "<<"\n";
    cout<<"4. Exit() "<<"\n";
    cout<<"Choice :: ";
    cin>>choice;
    
        if (choice<5){
        switch(choice){
            
            case 1:
            showbal();break;
            case 2:
            withdraw();break;
            case 3:
            depo();break;
            case 4: break;
        }
        }else{
            cout<<"Invalid Input **";
        }

};
void bank::showbal()
{
    
    cout<<"Your Available Balance Is : "<<avlbal<<"\n\n";
    for(int j=0;j<15;j++){
        cout<<"*";
    }
    cout<<" THANK YOU ";
    for(int j=0;j<15;j++){
        cout<<"*";
    }
    cout<<"\n";


};
void bank::depo()
{
    int depoamt;
    cout<<"Enter Amount You Want To Deposite : ";
    cin>> depoamt;
   

    cout<<"Your Amount Deposited Is : "<<depoamt<<"\n\n";
    for(int j=0;j<15;j++){
        cout<<"*";
    }
    cout<<" THANK YOU ";
    for(int j=0;j<15;j++){
        cout<<"*";
    }
    cout<<"\n";

    
};
void bank::withdraw()
{
    int withdraw;
    cout<<"Enter Amount You Want To Withdraw : ";
    cin>>withdraw;
    
  

    cout<<"Your Amount To Withdraw  Is : "<<withdraw<<"\n\n";
    for(int j=0;j<15;j++){
        cout<<"*";
    }
    cout<<" THANK YOU ";
    for(int j=0;j<15;j++){
        cout<<"*";
    }
    cout<<"\n";
    
      

};

int main (){

    bank SBI;
    SBI.welcome();
    
    return 0;
}