#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two integer pointers : "<<endl;
    cin>>a>>b;
    int *p1;
    int *p2;

    p1=&a;
    p2=&b;

    cout<<"Before swap a="<<*p1<<" "<<"b="<<*p2<<endl;
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<"After swap a="<<*p1<<" "<<"b="<<*p2<<endl;
}
