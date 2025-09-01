#include<iostream>
#include<ctime> //to genrate random number 
using namespace std; 

/*Random Number Genrator*/

int main (){
    srand(time(NULL));
//#Dice Game 
    int roll= (rand()%6)+1; //using reminder it'll show from 0 to 5 and by adding 1 
                            //it'll show from 1 to 6 random numbers 
    switch(roll)
    {
        case 1:cout<<"It's 1 "<<"\n";
        break;
        case 2:cout<<"It's 2 "<<"\n";
        break;
        case 3:cout<<"It's 3 "<<"\n";
        break;
        case 4:cout<<"It's 4 "<<"\n";
        break;
        case 5:cout<<"It's 5 "<<"\n";
        break;
        case 6:cout<<"It's 6 "<<"\n";
        break;
    }
    cout<<"\n\n";
//#Guessing Game 
    int guess;
    int winat=0;
    int num=rand()%100 +1;
    for(int i=0;i<16;i++){
        cout<<"*";
    }
        cout<<"GUESSING GAME";
    for(int i=0;i<16;i++){
        cout<<"*";
    }
    cout<<"\n\n\n";
    do{
        cout<<"Enter Your Guess : ";
        cin>>guess;
        winat++;
        if(guess==num){
            cout<<"You Won !!"<<"\n";
            cout<<"Tries : "<<winat;
            break;
        }

        
    }while(guess!=num);

    
                        
    
    return 0;
}