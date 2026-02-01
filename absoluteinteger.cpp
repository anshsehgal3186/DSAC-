#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<0){
        num=num*(-1);
    }
    cout<<"The absolute valur of interger is "<<num;
    return 0;
}
