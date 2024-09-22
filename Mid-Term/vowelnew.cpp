#include<iostream>
using namespace std;
int main()
{
    int word;
    cout<<"Enter a word :";
    cin>>word;

    switch(word)
    {
        case 'a' || 'A':
        cout<<"The word is a vowel"<<endl;
        break;
        case 'e' || 'E':
        cout<<"The word is a vowel"<<endl;
        break;
    }
}
