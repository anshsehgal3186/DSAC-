#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int a=0;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]>arr[j]){
                a=1;
                break;
            }
        }
    }
    if(a==0){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }

 return 0;
}