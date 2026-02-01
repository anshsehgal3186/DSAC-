#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"Enter length of rectangle: ";
    cin>>length;
    cout<<"Enter breadth of rectangle: ";
    cin>>breadth;
    int perimeter=2*(length+breadth);
    int area=length*breadth;
    cout<<perimeter;
    cout<<"\n"<<area;
    if(perimeter>area){
        cout<<" \n Perimeter is greater then area by: "<<perimeter-area;
    }
    else{
        cout<<" \n Area is greater then perimeter by: "<<area-perimeter;
    }
    return 0;
}