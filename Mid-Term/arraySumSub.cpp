#include<iostream>
using namespace std;

int main(){
    int arr1[5], arr2[5];
    cout<<"Enter 5 numbers of the first array: ";
    //taking inputs
    for(int i = 0;i<5;i++){
        cin>>arr1[i];
    }

    cout<<"Enter 5 numbers of the second array: ";
    //taking inputs
    for(int i = 0;i<5;i++){
        cin>>arr2[i];
    }

    //adding the value of each index number
    cout<<"Array addition: ";
    for(int i=0;i<5;i++){
        cout<<arr1[i]+arr2[i]<<" ";
    }
    cout<<endl;

    //if you want to store the result in an array then print it then ->
    int arr3[5];
    for(int i=0;i<5;i++){
        arr3[i] = arr1[i] - arr2[i];
    }
    //printing
    cout<<"Array subtraction: ";
    for(int i=0;i<5;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}



