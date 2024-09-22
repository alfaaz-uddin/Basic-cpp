#include<iostream>
using namespace std;
int main()
{
    float arrayX[2][4];
    cout<<"Enter the 8 elements in float number : "<<endl;

    for(int row=0;row<2;row++)
  {
       for(int column=0;column<4;column++)
  {
      cin>>arrayX[row][column];
  }
  cout<<endl;
  }

  float smallest=arrayX[0][0];
  for(int j=0; j<4; j++)
    if(arrayX[0][j]<smallest)
    smallest=arrayX[0][j];

    float largest=arrayX[1][0];
  for(int j=0; j<4; j++)
    if(arrayX[0][j]>largest)
    largest=arrayX[1][j];

  cout<<"smallest : "<<smallest<<endl;
  cout<<"largest : "<<largest<<endl;
  cout<<"Multi : "<<largest*smallest<<endl;



}
