#include<iostream>
using namespace std;

int main(){
    int day, mark;
    cout<<"Enter an day number: ";
    cin>>day>>mark;

    switch(day){
    case 1:
        cout<<"Saturday"<<endl;
        break;
    case 2:
        cout<<"Sunday"<<endl;
        break;
    case 3:
        cout<<"Monday"<<endl;
        break;
    case 4:
        cout<<"Tuesday"<<endl;
        break;
    case 5:
        cout<<"Wednesday"<<endl;
        break;
    case 6:
        cout<<"Thursday"<<endl;
        break;
    case 7:
        cout<<"Friday"<<endl;
        break;
    default:
        cout<<"Invalid number."<<endl;
    }

    switch(mark){
    case 90 ... 100:
        cout<<"A+";
        break;
    case 85 ... 89:
        cout<<"A";
        break;
    default:
        cout<<"Invalid";
    }

    int value = (mark>day) ? mark : day;
    cout<<endl<<value;
    /*if(mark>day){
        value = mark;
    }else{
        value = day;
    }*/

}

