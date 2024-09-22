#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if(num>=90 && num<101){
        cout<<"Grade is A+"<<endl;;
    }
    else if(num>=85 && num<90){
        cout<<"Grade is A"<<endl;
    }
    else if(num>=80 && num<85){
        cout<<"Grade is A-"<<endl;
    }
    else if(num>=75 && num<80){
        cout<<"Grade is B+"<<endl;
    }
    else if(num>=70 && num<75){
        cout<<"Grade is B"<<endl;
    }
    else if(num>=65 && num<70){
        cout<<"Grade is C+"<<endl;
    }
    else if(num>=60 && num<65){
        cout<<"Grade is C"<<endl;
    }
    else if(num>=55 && num<60){
        cout<<"Grade is D+"<<endl;
    }
    else if(num>=50 && num<50){
        cout<<"Grade is D"<<endl;
    }
    else if(num<50){
        cout<<"Grade is F"<<endl;
    }
    else {
        cout<<"Not valid!!";
    }



}
