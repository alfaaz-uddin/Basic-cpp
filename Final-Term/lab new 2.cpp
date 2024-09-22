#include <iostream>
using namespace std;
int main()
{

 float array[2][3];
 int row,column;


  for(int row=0;row<2;row++)
  {
       for(int column=0;column<3;column++)
  {
      cout<<"array["<<row<<"]["<<column<<"]=";
      cin>>array[row][column];
  }
  cout<<endl;
  }


  for(int row=0;row<2;row++)
  {
       for(int column=0;column<3;column++)
  {
      cout<<array[row][column]<<"  ";
  }
  cout<<endl;
  }


  float num;
  cout<<"Enter the number that you want to search : "<<endl;
  cin>>num;
  if(num==row || column){
    cout<<"The number is present.";
    } else {
        cout<<"The number is not present.";
    }
  }


