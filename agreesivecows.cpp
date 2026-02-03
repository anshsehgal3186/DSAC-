#include<iostream>
using namespace std;
int main(){
    int n; //number of stalls
    cout<<"Enter number of stalls: ";
    cin>>n;
    int k; // number of cows
    cout<<"Enter number of cows: ";
    cin>>k;
    int stalls[n];
    for(int i=0;i<=n-1;i++){
        cout<<"Enter distance of "<<i+1<<" stall: ";
        cin>>stalls[i];
    } 
    int index=0;
    for(int i=0;i<=n-1;i++){    //insertion sorting the array
        index=i;
        for(int j=i+1;j<=n-1;j++){
            if(stalls[j]<stalls[index]){
                index=j;
            }
            
        }
        swap(stalls[index],stalls[i]);
    }
    int start=0;
    int end=stalls[n-1]-stalls[0];
    int ans=0;
    
    while(start<=end){// binary search start
        int pos=stalls[0];
        int mid=start+(end-start)/2; // mid = distance between two cows
        int count=1;
        for(int i=1;i<n;i++){
            if(pos+mid<=stalls[i]){ // checking if the number of cows given can exist on that distance
                count++;
                pos=stalls[i];
            }
        }
        if(count>=k){     // if number of cows cannot be at that distance receding the distance
            ans=mid;
            start=mid+1;
        }
        else{           // else increasing the distance for maximum output
            end=mid-1;
        }

    }
     cout<<"The cows can be placed at: "<<ans;

    return 0;
}
