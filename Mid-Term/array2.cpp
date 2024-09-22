#include<iostream>
using namespace std;

int main(){
    int arr1[4]; int sum=0; float arr2[4];
    cout<<"Enter 4 numbers of the first array: ";
    for(int i = 0;i<4;i++){
        cin>>arr1[i];
    }

    cout<<"Enter 4 numbers of the second array: ";
    for(int i = 0;i<4;i++){
        cin>>arr2[i];
    }

    cout<<"For array 1: ";
        sum=arr1[0]+arr1[1]+arr1[2]+arr1[3];
        cout<<"sum :"<<sum<<endl;
        cout<<"Avg : "<<sum/4<<endl;
        cout<<"Multiplication : "<<arr1[0]*arr1[1]*arr1[2]*arr1[3]<<endl;

        cout<<"For array 2: ";
        sum=arr2[0]+arr2[1]+arr2[2]+arr2[3];
        cout<<"sum :"<<sum<<endl;
        cout<<"Avg : "<<sum/4<<endl;
        cout<<"Multiplication : "<<arr2[0]*arr2[1]*arr2[2]*arr2[3]<<endl;
    }







