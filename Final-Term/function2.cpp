#include<iostream>
using namespace std;
  void print()
  {
      cout<<"Enter a non-negative number : "<<endl;
       int a,b=1;
    cin>>a;
    for(int i=1; i<=a; i++){
            b=b*i;
    }
    cout<<b;

  }
  int main()
  {
      print();
  }
