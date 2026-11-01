#include<iostream>
using namespace std;

int a=10,b=20;
char choice;

int main(){
    cout<<"Enter your choice"<<endl;
cin>>choice;
cout<<"\n+\n-\n*\n/\n"<<endl;
    switch(choice){

        case '+':cout<<(a+b)<<endl;
            break;
        case '-':
            cout<<(b-a)<<endl;
            break;
        case '*':
            cout<<(a*b)<<endl;
            break;
        case '/':
            cout<<(b/a)<<endl;
            break;
    }
    return 0;

}
