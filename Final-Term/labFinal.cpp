#include<iostream>
using namespace std;
double largest(double table[3][4])
{
    double large=table[0][0];
    for(int j=0;j<4;j++)
    {
        if(table[0][j]>large){
            large=table[0][j];
        }
        return large;
    }
}

double smallest(double table[3][4])
{
    double small=table[2][0];
    for(int i=0;i<4;i++)
    {
        if(table[2][i]<small){
            small=table[2][i];
        }
        return small;
    }
}
int main(){
double table[3][4];
cout<<"Enter the decimal numbers : "<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>table[i][j];
    }
}
    double l=largest(table);
    double s=smallest(table);
    cout<<"Largest number of the first row : "<<l<<endl;
    cout<<"Smallest number of the third row : "<<s<<endl;
    cout<<"Multiplication is : "<<l*s;
}

