/*------------------------CREDIT CARD VALIDATOR-----------------------*/
//*******USING LUHN ALGORITHM*******/
/*Enter Your Credit Card Number Of 16 Digits it'll check If It Is existing credit card or Not*/
#include<iostream>
#include<vector>
using namespace std;

//--------------------------------------------------------------------

int sumofevennum(int arr[],int esum=0){
    for(int i=0;i<15;i+=2){
        arr[i]*=2;
        if(arr[i]>9){
        esum+=1+arr[i]-10;
        }else{
        esum+=arr[i];
        }
    }
    return esum;
};

//--------------------------------------------------------------------

int sumofoddnum(int arr[],int osum=0){
    for (int i=1;i<16;i+=2){
            osum+=arr[i];
    }
    return osum;
};

//--------------------------------------------------------------------

void checknum(string n){
    int len=n.length();
    int digits[16];
    int fsum;
    for (int i=0;i<16;i++){
        digits[i]=n[i]-'0';
    }
    for (int i=0;i<16;i++){
        cout<<digits[i]<<" ";
    }
    int numofdig=sizeof(digits)/sizeof(digits[0]);

    cout<<numofdig;
        if(numofdig==16){
        int esum1=sumofevennum(digits);
        int osum1=sumofoddnum(digits);
        fsum=esum1+osum1;

        if(fsum%10==0){
            cout<<"It is Credit Card Number ";
        }else{
            cout<<"It is not Credit Card Number ";
        }
    }else{
        cout<<"Invalid Input***";
    }

};

//--------------------------------------------------------------------
