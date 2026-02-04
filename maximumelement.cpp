#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of coloumns: ";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cout<<"Enter "<<i+1<<" "<<j+1<<" of the matrix: ";
            cin>>arr[i][j];
        }
    }
    int max=arr[1][1];
    for(int i=0;i<=r-1;i++){
        for(int j=1;j<=c-1;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    cout<<"The largest element of array is: "<<max;
    return 0;
}
