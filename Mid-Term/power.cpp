#include<iostream>
using namespace std;
int main()
{
    int num,pow,total=1;
    cout<<"Enter a number and it's power :"<<endl;
    cin>>num>>pow;

    for(int i=1; i<=pow; i++){
        total=total*num;
    }
    cout<<"The result is :"<<total;
}
