#include<iostream>
using namespace std;

int main(){
    int a =10;
    int *ptr=&a;
    cout<<"Before changing :"<<a<<endl;
    *ptr=50;
    cout<<"after changing: "<<a<<endl;
    return 0;
}