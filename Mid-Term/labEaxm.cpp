#include<iostream>
using namespace std;
int main()
{
    int score[3];
    cout<<"Enter three players score"<<endl;
    for(int i=0; i<3; i++){
    cin>>score[i];}

        int highest=score[0];
         for(int i=0; i<3; i++){
            if(score[i]>highest){
                highest=score[i];
            }
            cout<<highest;
         }


            int totalScore = 0;
    for(int i = 0;i<3;i++){
        totalScore =totalScore + score[i];
    }
    cout<<totalScore;



}
