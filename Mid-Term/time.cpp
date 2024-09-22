#include<iostream>
using namespace std;

int main(){
    int hour=0,minutes=0,seconds=0,total=0;
    cout<<"Enter time: ";
    cin>>hour>>minutes>>seconds;
    if(hour==0){
        total=minutes;
    }else{
        total=hour*60+minutes;
    }
    total = (total*60)+seconds;
    cout<<hour<<" hour "<<minutes<<" minutes "<<seconds<<" seconds = "<<total<<" seconds.";

    return 10;
}

