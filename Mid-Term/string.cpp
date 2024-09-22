/* Take a string as character array input. Count the numbers of capital letter,
 small letter, integer number and special character then print the numbers.*/

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char word[20];
    cout<<"Enter a word (not more than 20 characters without space): ";
    cin>>word;

    int length = strlen(word);
    int capitalCount = 0, smallCount = 0, intCount =0, specialCount = 0;
    for(int i = 0; i<length ; i++){
        if(word[i]>=65 && word[i]<=90){  //checking using ASCII values
            capitalCount++;
        }else if(word[i]>=97 && word[i]<=122){
            smallCount++;
        }else if(word[i]>=48 && word[i]<=57){
            intCount++;
        }else{
            specialCount++;
        }
    }
    cout<<word<<endl;
    cout<<"Capital letters: "<<capitalCount<<endl;
    cout<<"Small letters: "<<smallCount<<endl;
    cout<<"Integer numbers: "<<intCount<<endl;
    cout<<"Special characters: "<<specialCount<<endl;

}
