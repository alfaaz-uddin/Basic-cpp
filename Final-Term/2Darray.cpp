#include<iostream>
using namespace std;

void middleRowCol(int matrix[5][5]){
    cout<<endl<<"Middle row and column of the matrix: "<<endl;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if( i == 2 || j == 2){
                cout<<matrix[i][j]<<" ";
            }else{
                cout<<"  ";
            }

        }
        cout<<endl;
    }
}

void upperHalf(int matrix[5][5]){
    cout<<endl<<"Upper half of the matrix: "<<endl;

    for(int i=0; i<5; i++){
        for(int k=0; k<i; k++){
            cout<<"  ";
        }
        for(int j=i; j<5; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void lowerHalf(int matrix[5][5]){
    cout<<endl<<"Lower half of the matrix: "<<endl;

    for(int i=0; i<5; i++){
        for(int j=0; j<=i; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int matrix[5][5] = { {1, 2, 3, 4, 5},
                         {1, 2, 3, 4, 5},
                         {1, 2, 3, 4, 5},
                         {1, 2, 3, 4, 5},
                         {1, 2, 3, 4, 5} };

    cout<<"Original matrix: "<<endl;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    middleRowCol(matrix);
    upperHalf(matrix);
    lowerHalf(matrix);
}

