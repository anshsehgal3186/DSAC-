#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        char a=65;
        int b=1;
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                cout<<b;
                b++;
            }
            else{
                cout<<a;
                a++;
            }
        }
        cout<<"\n";
    }
    return 0;
}