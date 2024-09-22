#include <iostream>
using namespace std;
int main()
{
    char name[] = {'A', 'L', 'F', 'A', 'Z'};

    char ch;

    while (true) {
    cout <<"Enter a character to check or '.' to exit: ";
    cin>>ch;

    if(ch =='.') {
    cout<<"Good day, tata." <<endl;
            break;
        }

        for(int i=0; i<5; i++){
            if (name[i] == ch) {
        cout<<"The character is present in the name!"<<endl;
            break;
            }
        else {
        cout << "The character is not present in the name." <<endl;
        break;
           }

        }
    }

}
