#include<iostream>
using namespace std;
int main()
{

    int classConducted, classAttended;
    cout<<"Enter the number of class conducted :";
    cin>>classConducted;

    cout<<"Enter the number of attendant :";
    cin>>classAttended;
    int per = (classAttended*100)/classConducted;
    cout<<per<<"% class attentded.";
    if(classAttended>classConducted) {
        cout<<"Error!";
    }
}
