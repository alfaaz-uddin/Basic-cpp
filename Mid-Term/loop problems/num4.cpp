#include<iostream>
using namespace std;
int main()
{
    int a,b=1;
    cout<<"Enter a number :"<<endl;
    cin>>a;
    for(int i=1; i<=a; i++){
            b=b*i;
    }
    cout<<b;
}

