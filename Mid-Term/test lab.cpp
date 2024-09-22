#include<iostream>
using namespace std;

int main(){
    int number1,number2, flag =0;
    cout<<"Enter a range: ";
    cin>>number1>>number2;
    for(int i = number1; i<=number2 ;i++){
            flag = 0;
        for(int j = 2; j<i; j++){
            if(i%j == 0){
                flag=1;
                //cout<<j<<" ";
                break;
            }
        }
        if(flag == 0){
            cout<<i<<" is a prime number."<<endl;
        }else{
            cout<<i<<" is not a prime number. "<<endl;
        }
    }

}
