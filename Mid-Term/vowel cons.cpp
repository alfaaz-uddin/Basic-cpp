#include<iostream>
using namespace std;
int main()
{
    char letter;
    cout<<"Enter a letter : ";
    cin>>letter;

    if
       (letter == 'a' || letter == 'A' || letter == 'e' || letter =='E' ||
        letter == 'i' || letter == 'I' || letter == 'o' || letter =='O' ||
        letter == 'u' || letter == 'U')

        { cout<<"The letter is a vowel"<<endl;

    }
    else
    {
        cout<<"The letter a consonant."<<endl;
    }

}
