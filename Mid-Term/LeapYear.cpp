#include<iostream>
using namespace std;
int main()
{
    int year;
    int a;
    a=0;
    cout<<"Enter a year :"<<endl;
    cin>>year;
    if (year%4==0 && year%100!=0 || year%400==0)
    {
        cout<<"The year is a leap year."<<endl;
    }
    else {
        cout<<"The year is not a leap  year."<<endl;
    }


    for(int i=0; i=100; i++)
         {
        cout<<"Alfaz is the best!!"<< a++ <<endl;
    }
}
