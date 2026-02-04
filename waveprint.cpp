#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rowls and coloumns: ";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<"Enter "<<i+1<<" "<<j+1<<" element: ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
           
        }
    }
    
    return 0;
}