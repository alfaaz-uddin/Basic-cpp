#include<iostream>
using namespace std;

int main(){
    int arr1[3][5];
    int row,col;
    cout<<"Enter row and column for the array: ";
    cin>>row>>col;
    int arr2[row][col];

    int arr3[2][3] = {1,2,3,4,5,6};
    int arr4[2][3] = {{1,2,3},{4,5,6}};
    int arr5[3][3] = {  {1,2,3},
                        {4,5,6},
                        {7,8,9} };
    int arr6[3][3] = {  {9,8,7},
                        {6,5,4},
                        {3,2,1} };

    cout<<"Matrix addition (arr5 + arr6): "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr5[i][j]+arr6[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Matrix subtraction (arr5 - arr6):"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr5[i][j]-arr6[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int multi[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            multi[i][j]=0;
        }
    }
    cout<<"Matrix multiplication (arr5 * arr6):"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                multi[i][j] += (arr5[i][k]*arr6[k][j]);
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<multi[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<endl;
    int sum=0;
    //left diagonal
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                cout<<arr5[i][j]<<" ";
                sum+=arr5[i][j];
            }
        }
    }
    cout<<"    left diagonal sum:"<<sum;
    cout<<endl;

    sum=0;
    //right diagonal
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i+j==2){
                cout<<arr5[i][j]<<" ";
                sum+=arr5[i][j];
            }
        }
    }
    cout<<"    right diagonal sum:"<<sum;
    cout<<endl;


}
