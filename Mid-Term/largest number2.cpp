#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;

    cout<<"Enter three integer numbers : "<<endl;
    cin>>a>>b>>c;

    if(a>b)

 {
    if(a>c) {
        cout<<a<<" is the largest."<<endl;
      }

    else{
        cout<<c<<" is the largest. "<<endl;
      }
 }

     if (b>c){
        cout<<b<<" is the largest."<<endl;
    }
    else{
        cout<<c<<" is the largest."<<endl;
    }

   //alt

if (a>b && a>c){
    cout<<a<<" is the largest."<<endl;
}
else {
    if(b>c){
    cout<<b<<" is the largest"<<endl;
    }

    cout<<c<<" is the largest"<<endl;

     }
        }
