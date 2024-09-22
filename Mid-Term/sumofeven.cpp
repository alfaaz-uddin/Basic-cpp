/*11.	Write a program that calculates the sum of all the even numbers between 1 and a given number.
For example, if the user inputs the number 10, the program should print out 30
(which is the sum of 2+4+6+8+10).
*/

#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    cout<<"Enter a number :"<<endl;
    cin>>a;
    for(int i=1; i<=a; i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<sum;
}
