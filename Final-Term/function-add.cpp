#include <iostream>
using namespace std;
 void addition(int a,int b)
 {

    int sum =a+b;

    cout<<"sum :"<<sum<<endl;

}
 void subtraction(int a,int b)
 {

    int sub =a-b;

    cout<<"subtraction :"<<sub<<endl;

}
 void multiplication(int a,int b)
 {

    int multi =a*b;

    cout<<"multiplication :"<<multi<<endl;

}
 void division(int a,int b)
 {

    int div =a/b;

    cout<<"division :"<<div<<endl;

}

int main()
{
	addition(100,30);
	subtraction(100,30);
	multiplication(100,30);
	division(100,30);

}
