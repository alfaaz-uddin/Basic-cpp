#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number :"<<endl;
    cin>>a;

    for(int i=1; i<=10; i++){
       cout<<a<<"X"<<i<<"="<<a*i<<endl;
    }
}
