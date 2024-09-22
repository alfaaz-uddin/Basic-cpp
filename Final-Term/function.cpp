#include<iostream>
using namespace std;

void maximum(int arr1[5]){
    int max = arr1[0];
    for(int i = 0;i<5;i++){
        if(arr1[i]>max){
            max = arr1[i];
        }
    }
    arr1[2] = 100;
    cout<<"Maximum: "<<max<<endl;
}

void minimum(int arr2[5]){
    int min = arr2[0];
    for(int i = 0;i<5;i++){
        if(arr2[i]<min){
            min = arr2[i];
        }
    }
    arr2[4] = 1000;
    cout<<"Minimum: "<<min<<endl;
}

int main(){
    int arr[5];
    cout<<"Enter 5 integer numbers: ";

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    maximum(arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    minimum(arr);
    //int i;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    //cout<<i<<endl;
}
