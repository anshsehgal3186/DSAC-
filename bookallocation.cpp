#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cout<<"Enter pages in "<<i+1<<" book: ";
        cin>>arr[i];
    }
    int m;
    int ans=arr[n-1];
    cout<<"Enter number of students: ";
    cin>>m;
    int sum=0;
    for(int i=0;i<=n-1;i++){
        sum+=arr[i];
    }
    int start = arr[n-1];
    int end=sum;
    while(start<=end){
        int mid=start+(end-start)/2;
        int page=0;
        int count=1;
        for(int i=0;i<=n-1;i++){
            page+=arr[i];
            if(page>mid){
                count++;
                page=arr[i];
            }
        }
        if(count<=m){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<ans;
    return 0;
}