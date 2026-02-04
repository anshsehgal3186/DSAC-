#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of coloumns: ";
    cin>>c;
    int arr[r][c];
    int brr[r][c];
    int crr[r][c];
    for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cout<<"Enter "<<i+1<<" "<<j+1<<" of first matrix: ";
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
            cout<<"Enter "<<i+1<<" "<<j+1<<" of second matrix: ";
            cin>>brr[i][j];
        }
    }
     for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
           crr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    cout<<"RESULTANT MATRIX: "<<endl;
     for(int i=0;i<=r-1;i++){
        for(int j=0;j<=c-1;j++){
           cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}