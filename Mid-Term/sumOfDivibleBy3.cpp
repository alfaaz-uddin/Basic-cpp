/*Write a program that calculates the sum of all the numbers divisible by 3 between 1 and a given
number. For example, if the user inputs the number 9, the program should print out 18 (which is
the sum of 3+6+9).
*/

#include<iostream>
using namespace std;
int main()
{
    int a, sum=0;
    cout<<"Enter a number :"<<endl;
    cin>>a;

    for(int i=1; i<=a; i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
     cout<<sum;
}
