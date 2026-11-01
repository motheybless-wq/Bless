#include<iostream>
using namespace std;

int main()
{
    int pin,rpin=4567;
    cin>>pin;
    int amounthave=200,amountwant;
      //cout<<"Enter the amount"<<endl;
       // cin>>amountwant;
    if(pin==rpin){
        cout<<"Enter the amount"<<endl;
        cin>>amountwant;
        if(amountwant>200){
            cout<<"insufficient balance"<<endl;
        }
        else{
            cout<<"the amount has been withdrawn"<<endl;
        }
    }    else{

            cout<<"Incorrect pin"<<endl;
        }

    

    return 0;

}