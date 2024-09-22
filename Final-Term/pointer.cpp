#include<iostream>
using namespace std;
int main()
{
    int a=30,b=50,temp;
    int *p1;
    int *p2;
    p1=&a;
    p2=&b;
    cout<<"before swap a="<<*p1<<"b="<<*p2<<endl;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<"before swap a="<<*p1<<"b="<<*p2<<endl;

    int sum=*p1+*p2;
    int sub=*p1-*p2;

    cout<<"Sum :"<<sum<<endl;
    cout<<"Sum :"<<sub<<endl;

    cout<<"Value of this variable :"<<a<<endl;
    cout<<"Address Value of this variable :"<<&a<<endl;
    cout<<"Address of this variable using pointer :"<<p1<<endl;
    cout<<"Value of this variable using pointer :"<<*p1<<endl;

}
