#include<iostream>
using namespace std;
int main()
{
   int number;
   cout<<"Enter an integer number : ";
   cin>>number;

   if(number<0){
    number=-number;
   }
    cout<< "The absolute number is : "<<number<<endl;
}
