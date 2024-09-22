#include<iostream>
using namespace std;
int main()
{
    int array[3][2]={{5,6},{3,9},{1,8}};
    cout<<"The elements are : "<<endl;
    for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
    cout<<array[i][j]<<" ";
   }
    cout<<endl;
}
    int x=0,y=0;
    int smallest=array[0][0];

    for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
    if(array[i][j]<array[0][0]){
    smallest=array[i][j];
    x=i;
    y=j;
   }
 }
}
cout<<"The smallest number :"<<smallest<<endl;
cout<<"The index of the array :"<<"["<<x<<"]["<<y<<"]";
}
