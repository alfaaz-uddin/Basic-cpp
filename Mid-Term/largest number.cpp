#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter two integer numbers: ";
    cin>>a>>b;

    if(a>b){
        cout<<a<<" is the largest."<<endl;
    }else{
        cout<<b<<" is the largest."<<endl;

    }

    //alt
    cout<<"Enter two integer numbers : ";
    cin>>a>>b;

    if(a<b){
        cout<<a<<" is the lowest."<<endl;
    } else{
        cout<<b<<" is the lowest."<<endl;

    }
}

