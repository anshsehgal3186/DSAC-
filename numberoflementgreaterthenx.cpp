#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    int count=0;
    cout<<"Enter size of an array: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<=n-1;i++){
        cout<<"Enter "<<i+1<<" elememnt: ";
        cin>>v[i];
    }
    cout<<"Enter a number: ";
    cin>>m;
    for(int i=0;i<=n-1;i++){
        if(v[i]>m){
            count++;
        }
    }
    cout<<"The given number have occured: "<<count<<" times.";

    return 0;
}
