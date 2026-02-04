#include<iostream>
using namespace std;

int main(){
    int r1,c1,r2,c2;

    cout<<"Enter rows of first matrix: ";
    cin>>r1;
    cout<<"Enter columns of first matrix: ";
    cin>>c1;

    cout<<"Enter rows of second matrix: ";
    cin>>r2;
    cout<<"Enter columns of second matrix: ";
    cin>>c2;

    if(c1 != r2){
        cout<<"The given input is invalid!";
        return 0;
    }

    int arr[r1][c1];
    int brr[r2][c2];

    // Input first matrix
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"Enter "<<i+1<<" "<<j+1<<" element of first matrix: ";
            cin>>arr[i][j];
        }
    }

    // Input second matrix
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<"Enter "<<i+1<<" "<<j+1<<" element of second matrix: ";
            cin>>brr[i][j];
        }
    }

    int crr[r1][c2];

    // Initialize result matrix
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            crr[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                crr[i][j] += arr[i][k] * brr[k][j]; 
            }
        }
    }

    // Output result
    cout<<"\nResultant Matrix:\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
