#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    int count=0;
    cout<<"Enter size of vector: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<=n-1;i++){
        cout<<"Enter "<<i+1<<" element: ";
        cin>>v[i];
    }
    cout<<"Enter element: ";
    cin>>m;
    for(int i=n-1;i>=0;i--){
        if(v[i]==m){
            cout<<i<<endl;
             break;

        }
       
        
    }

    return 0;
}