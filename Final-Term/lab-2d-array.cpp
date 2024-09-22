#include<iostream>
using namespace std;
int main()
{
    int matrixA[2][2]={{25,69},{56,98}};
    int matrixB[2][2]={{14,45},{25,47}};

     cout<<"Matrix 1 is :"<<endl;
     for(int row=0; row<2; row++){
        for(int col=0; col<2; col++)
            {cout<<matrixA[row][col]<<" ";
               }
            cout<<endl;
     }

     cout<<"Matrix 2 is :"<<endl;
     for(int row=0; row<2; row++){
        for(int col=0; col<2; col++)
            {cout<<matrixB[row][col]<<" ";
            } cout<<endl;
     }

    cout<<"Matrix Addition :"<<endl;
    for(int row=0; row<2; row++){
        for(int col=0; col<2; col++)
            {

            cout<<matrixA[row][col]+matrixB[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix Subtraction :"<<endl;
    for(int row=0; row<2; row++){
        for(int col=0; col<2; col++)
            {

            cout<<matrixA[row][col]-matrixB[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix Multiplication :"<<endl;
   /* for(int row=0; row<2; row++){
        for(int col=0; col<2; col++)
            {

            cout<<matrixA[1][1]*matrixB[2][1];
        }*/
        cout<<(matrixA[0][0]*matrixB[0][0])+(matrixA[0][1]*matrixB[1][0])<<" ";
        cout<<(matrixA[0][0]*matrixB[0][1])+(matrixA[0][1]*matrixB[1][1])<<" "<<endl;
        cout<<(matrixA[1][0]*matrixB[0][0])+(matrixA[1][1]*matrixB[1][0])<<" ";
        cout<<(matrixA[1][0]*matrixB[1][1])+(matrixA[1][1]*matrixB[1][1])<<" ";
    }


