#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1,3,7,9,4}, arr2[] = {2,4,6,8,7};
    for(int i=0; i<5; i+=2){ cout<<arr1[i]<<","; }
    for(int i=1; i<5; i+=2){ cout<<arr1[i]<<","; }
    cout<<endl;
    int j = 1;
    while(j<5){
        cout<<arr2[j]<<",";
        j+=2;
    }
    int k=0;
    do{
        cout<<arr2[k]<<",";
        k+=2;
    }while(k<5);
    cout<<endl;
    arr1[3] = 10;
    for(int i=1; i<5; i+=2){ cout<<++arr1[i]<<",";}
    cout<<endl;
    arr2[2] = 20;
    for(int i=0; i<5; i+=2){ cout<<--arr2[i]<<","; }
    cout<<endl;

return 0;
}
