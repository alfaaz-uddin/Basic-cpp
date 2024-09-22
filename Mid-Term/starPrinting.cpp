#include<iostream>
using namespace std;
int main()
{
    int a, i, j, k;
    cout<<"Enter Number of Rows: ";
    cin>>a;

    for(i=0; i<a; i++){
        for(j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;

    for(i=a; i>=0; i--){
        for(j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(i=0; i<=a; i++){
        for(j=a-i; j>=0; j--){
            cout<<" ";
        }
        for(k=0; k<i; k++){
            cout<<"R ";
        }
        cout<<endl;
    }
}
/*
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    for(a=0; a<=5; a++){
        for(b=5; b>=a; b--){
            cout<<" ";
        }
        for(c=0; c<=a; c++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
*/

