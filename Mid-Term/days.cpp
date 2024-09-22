#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter a day number :";
    cin>>day;

    switch(day)
{
    case 1:
        cout<<"Sat"<<endl;
        break;
    case 2:
        cout<<"Sun"<<endl;
        break;
    case 3:
        cout<<"Mon"<<endl;
        break;
    case 4:
        cout<<"Tues"<<endl;
        break;
    case 5:
        cout<<"Wed"<<endl;
        break;
    case 6:
        cout<<"Thurs"<<endl;
        break;
    case 7:
        cout<<"Fri"<<endl;
        break;
    default:
        cout<<"Invalid"<<endl;

      }
}
