#include <iostream>
using namespace std;



int main()
{
  int matrix[2][3];


  for(int row=0;row<2;row++)
  {
       for(int column=0;column<3;column++)
  {
      cout<<"matrix["<<row<<"]["<<column<<"]=";
      cin>>matrix[row][column];
  }
  cout<<endl;
  }



  for(int row=0;row<2;row++)
  {
       for(int column=0;column<3;column++)
  {
      cout<<matrix[row][column]<<"  ";
  }
  cout<<endl;
  }

  /*int smallest=matrix[0][0];
         for(int i=0; i<5; i++){
            if(matrix[i][j]<smallest){
                smallest=marks[i];
            }
         }
         cout<<smallest<<endl; */




}
