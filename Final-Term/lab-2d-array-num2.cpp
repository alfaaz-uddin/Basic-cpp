#include<iostream>
using namespace std;
int main()
{
    float array[3][4]={{5.2, 6.4, 9.2, 4.3},{1.8, 6.7, 7.1, 3.6},{4.1, 8.4, 10.2, 2.9}};

    int row=3, col=4;

    cout<<"Number of Rows: "<<row<<endl;
    cout<<"Number of Columns: "<<col<<endl;

    float sum=0.0;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            sum += array[i][j];
        }
    }
    float average=sum/(row*col);

    cout<<"Summation of numbers: "<<sum<<endl;
    cout<<"Average of numbers: "<<average<<endl;

}
