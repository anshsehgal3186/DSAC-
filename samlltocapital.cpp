#include<iostream>
using namespace std;
char change(char a){
    char ans=a-'a'+'A';
    cout<<ans;
}
int main(){
    char n;
    cout<<"Enter your character: ";
    cin>>n;
    change(n);
    return 0;
}
