//here's first example of Class (comibination of structure and function)
//building fuction using class to check binary string and finding once complement 

#include<iostream>
using namespace std;

//Creating class for check binary 
class binary
{
    private://it's private so users cann't see this 
        string s;
        void check(void);
        void ones_comp(void);
        void romtoint(void);
    public:
        void diap(void);
        


};


//fuction to check if it is binary string or not 
void binary::check(void){
     for(int i=0;i<s.length();i++){
        if (s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect Binary Format "<<"\n";
            exit(0);
        }
    }
     cout<<"Displaying your binary number : "<<s<<"\n";
};

//fuction to find once compliment 
void binary::ones_comp(void){
    for(int i=0;i<s.length();i++){
        if (s.at(i)=='1'){
            s.at(i)='0';
        }else{
            s.at(i)='1';
        }
    }
    cout<<"Ones Compliment Of This Binary String : ";

    for (int j=0;j<s.length();j++){
        cout<<s.at(j);
    }
    cout<<"\n";
};
//function to display output 
void binary:: diap(void){
    cout<<"Enter The Binary String : ";
    cin>>s;
    //using other two function 
    check();
    ones_comp();

};



int main (){

    binary x;//class object is x 
    x.diap();//only public function can use otherwise ti'll show error 
    

    return 0;
}