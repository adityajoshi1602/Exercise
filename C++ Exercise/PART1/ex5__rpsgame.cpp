#include<iostream>
#include <ctime>
using namespace std;
void compchoice();
void yourchoice();
void winner();
void rockpaperscissors();
char switchsign(int choice);


//--------------------------------------

char switchsign(int choice)
{
    string s;
    switch (choice){
        case 1 :s="ROCK";break;
        case 2:s="PAPER";break;
        case 3:s="SCISSOCRS";break;
    }
    cout<<s;
};

//---------------------------------------
void compchoice(int &comp)
{
    srand(time(NULL));
    comp=rand()%3 +1;

    cout<<"Computer's Choice Is :: ";
    switchsign(comp);
    cout<<"\n";
};

//----------------------------------------
void yourchoice(int &ychoice)
{

     for (int i=0;i<16;i++){
        cout<<"*";
    }
    cout<<" ENTER YOUR CHOICE ";
     for (int i=0;i<16;i++){
        cout<<"*";
    }
    cout<<"\n";
    cout<<"1. ROCK "<<"\n";
    cout<<"2. PAPER "<<"\n";
    cout<<"3. SCISSORS "<<"\n";
    cout<<"Choice :: ";
    cin>>ychoice;
    cout<<"Your Choice Is ::";
    switchsign(ychoice);
    cout<<"\n";


};

//--------------------------------------
void rockpaperscissors()
{
    int choice;
    int ychoice;
    int comp;
    for (int i=0;i<16;i++){
        cout<<"*";
    }
    cout<<" WELCOME TO GAME ";
    for (int i=0;i<16;i++){
        cout<<"*";
    }
    cout<<"\n\n";

    yourchoice(ychoice);//rock=1 paper=2 scissors=3
    compchoice(comp);
    if(comp==ychoice){
        cout<<"DRAW !!";
    }else if(comp ==3 && ychoice==1){
        cout<<"YOU WON !!";
    }else if(comp ==2 && ychoice==3){
        cout<<"YOU WON !!";
    }else if(comp ==1 && ychoice==2){
        cout<<"YOU WON !!";
    }else if(comp ==1 && ychoice==3){
        cout<<"YOU LOSE !!";
    }else if(comp ==3 && ychoice==2){
        cout<<"YOU LOSE !!";
    }else if(comp ==2 && ychoice==1){
        cout<<"YOU LOSE !!";
    }


};
int main(){
    rockpaperscissors();
    return 0;
}