/*-----------------------------------QUIZ GAME-----------------------------------------*/

//This Quiz Game Is Based On COncept Of Multidimensional Arrays And Various Operations On It
//You Could Make Your Own Quizz By Use Of This

#include<iostream>
using namespace std;

//--------------------------------------------------------------------------------------
class quiz{
    private:
    string que[4];
    string opt[4][4];
    char answer[4];
    char youranswer[4];
    void getque();
    void getans();
    void getopt();
    void startquiz();
    int count=0;
    public:
    void welcomequiz(){
        for(int i=0;i<16;i++){
            cout<<"*";
        }
        cout<<" WELCOME TO QUIZ ";
        for(int i=0;i<16;i++){
            cout<<"*";
        }
        cout<<"\n\n";

        getque();
        startquiz();
        return;
    }
};

//--------------------------------------------------------------------------------------

void quiz::getque(){
    for(int i=0;i<16;i++){
            cout<<"*";
        }
        cout<<" ENTER QUESTIONS ";
        for(int i=0;i<16;i++){
            cout<<"*";
        }
        cout<<"\n";
        for(int i=0;i<4;i++){
            cout<<i+1<<". ";
            getline(cin,que[i]);
        }
        cout<<"\n";
        getopt();
        getans();

        return;
};

//--------------------------------------------------------------------------------------

void quiz::getopt(){
    cout<<"Enter The Options :: "<<"\n";
    for (int i=0;i<4;i++){
        cout<<"Q."<<i+1<<" ";
        cout<<"a)";getline(cin,opt[i][0]);
        cout<<"b)";getline(cin,opt[i][1]);
        cout<<"c)";getline(cin,opt[i][2]);
        cout<<"d)";getline(cin,opt[i][3]);
    }
    return;
};

//--------------------------------------------------------------------------------------

void quiz::getans(){
    cout<<"Enter Answers of Questions :: ";
    for(int i=0;i<4;i++){
        cout<<"For Q."<<i+1;
        cin>>answer[i];cout<<" ";
    }
};

//--------------------------------------------------------------------------------------

void quiz::startquiz(){
    cout<<"\n";
    cout<<"************Start Quiz************";
    cout<<"\n\n";
    for(int i=0;i<4;i++){
        cout<<"Q."<<i+1<<" "<<que[i]<<"\n";
        cout<<"a)";cout<<opt[i][0]<<" ";
        cout<<"b)";cout<<opt[i][1]<<" ";
        cout<<"c)";cout<<opt[i][2]<<" ";
        cout<<"d)";cout<<opt[i][3]<<"\n";

        cout<<"Ans. ";
        cin>>youranswer[i];

        if(youranswer[i]==answer[i]){
            cout<<"Your Answer Is Correct !!"<<"\n";
            count++;
        }else{
            cout<<"Your Answer Is Wrong***"<<"\n";
        }

    }

    cout<<"Your Score is :: "<<count<<"/4";

    return;
};

//--------------------------------------------------------------------------------------
