#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a positive integer number :"<<endl;
    cin>>a;

    if(a>0){
    for(int i=1; i<=10; i++){
       cout<<a<<"x"<<i<<"="<<a*i<<endl;
    }
    }
    else cout<<"The number is not a positive integer";
}
