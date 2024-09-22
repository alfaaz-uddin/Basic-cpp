#include<iostream>
using namespace std;
int main()
{
    int score[3];
    cout<<"Enter three players score"<<endl;
    for(int i=0; i<3; i++){
    cin>>score[i];}

    if(score[0]>score[1] && score[0]>score[2]){
        cout<<score[0]<<" is the the highest"<<endl;
    } else if(score[1]>score[2]){
    cout<<score[1]<<" is the the highest"<<endl;}
    else {
        cout<<score[2]<<" is the the highest"<<endl;
    }

     int sum=score[0]+score[1]+score[2];
     cout<<"The total score is "<<sum<<endl;


}
