#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];
    }
    // Selection Sort
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[index]){
                index=j;
            }
        }
        swap(arr[i], arr[index]);
    }
    int k;
    cout<<"Enter a number you want to find: ";
    cin>>k;
    // Binary Search
    int start=0, end=n-1;
    bool found=false;
    while(start <= end){
        int mid=start+(end-start)/2;

        if(arr[mid]==k){
            cout<<"The number is at "<<mid<<" index";
            found=true;
            break;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(!found){
        cout<<"Number not found";
    }      
    
    return 0;
}