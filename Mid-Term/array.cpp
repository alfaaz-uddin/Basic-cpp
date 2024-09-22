#include<iostream>
using namespace std;
int main()
{
    int marks[5]={26,65,62,45,46};

        int maxv=marks[0];
         for(int i=0; i<5; i++){
            if(marks[i]>maxv){
                maxv=marks[i];
            }
         }

        cout<<maxv<<endl;

        int minv=marks[0];
         for(int i=0; i<5; i++){
            if(marks[i]<minv){
                minv=marks[i];
            }
         }
         cout<<minv<<endl;

         int sum = 0;
    for(int i = 0;i<5;i++){
        sum = sum + marks[i];
    }
    cout<<sum/5;
}
