#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count=0;
    if(n==0){
        cout<<"The given number has 1 trail of zero";
    }
    while(n%10==0){
        n=n/10;
        count++;
    }
    cout<<"The number has "<<count<<" zeroes in the trail";
    return 0;
}