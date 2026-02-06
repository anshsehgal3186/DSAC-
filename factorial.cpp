#include<iostream>
using namespace std;
int fact(int a){
    int Fact=1;
    for(int i=1;i<=a;i++){
        Fact=Fact*i;}
 return Fact;
    }

int main(){
    cout<<fact(4);
    return 0;
}