#include<iostream>
using namespace std;
int main()
{
    int a, sum=0;
    cout<<"Enter a number :"<<endl;
    cin>>a;

    for(int i=1; i<=a; i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
     cout<<sum;
}

