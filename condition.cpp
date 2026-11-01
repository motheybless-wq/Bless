#include<iostream>
using namespace std;

int main(){
int year;
cout<<"Enter the year"<<endl;
cin>>year;
if(year%400==0){
    cout<<"It is a leap year"<<endl;
}
else if(year%100==0){
    cout<<"it is not a leap year"<<endl;
}
else if(year%4==0){
    cout<<"leap year";
}
else{
    cout<<"not a leap year";
}
return 0;
}