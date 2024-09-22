/* QUES: Write a program that  prints the fibonacci series up to a given number. If user enters 10 then the first 10 numbers
of the series should be printed. ( 1 1 2 3 5 8 13 21 34 55 ) - Don't need to give thanks, enjoy! - Borobhai*/


#include<iostream>
using namespace std;
int main()
{
    int num,a,b,c,sum;
    a=0,b=1,c=1;
    cout<<"Enter a number :"<<endl;
    cin>>num;

    for(int i=1;i<=num;i++){
            cout<<c<<" ";
            c=a+b;
            a=b;
            b=c;
    }
    sum=b+c;
    cout<<sum;
}
