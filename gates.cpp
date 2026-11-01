#include<iostream>
using namespace std;

int main(){
        int age=10;
        int marks=85;

        if(age>=18){
            cout<<"you are eligible"<<endl;
        }
        cout<<"i am good"<<endl;
        cout<<(age>=18&&age<=25)<<endl;
        cout<<(marks>=90||marks>=85)<<endl;
        cout<<!(age>=18)<<endl;
        return 0 ;
}