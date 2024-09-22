#include<iostream>
using namespace std;
int main()
{
    int mat1[2][3]= {{1,2,3},{4,5,6}};
    int mat2[2][3]={{2,6,7},{6,1,3}};
    int mat3[3][3]={{1,2,3},{4,5,6},{9,2,4}};


    //sum
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<mat1[i][j]+mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    //sub
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<mat1[i][j]-mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    //multi
         int multi[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            multi[i][j]=0;
        }
    }
    cout<<"Matrix multiplication (arr5 * arr6):"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                multi[i][j] += (mat1[i][k]*mat2[k][j]);
            }
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<multi[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<endl;

    //left diagonal
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                cout<<mat3[i][j]<<" ";
                sum+=mat3[i][j];
            }
        }
    }
    cout<<"    left diagonal sum:"<<sum;
    cout<<endl;
    //right diagonal
    sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i+j==2){
                cout<<mat3[i][j]<<" ";
                sum+=mat3[i][j];
            }
        }
    }
    cout<<"    right diagonal sum:"<<sum;
    cout<<endl;
}
