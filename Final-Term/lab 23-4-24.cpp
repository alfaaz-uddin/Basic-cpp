#include<iostream>
using namespace std;
int max(int a, int b, int c)
{
    if(a>b && a>c){
        return a;
    }
    else if(b>c){
        return b;
    }
    else {
        return c;
    }

}
int main()

{
    cout<<"Maximum number is :"<<max(10,20,30);
}

