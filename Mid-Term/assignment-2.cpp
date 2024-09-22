#include <iostream>
using namespace std;

int main()
{
    int size;

    cout<<"Enter array size: ";
    cin>>size;

    int arr[size];

    cout<<"Enter array numbers: ";
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    cout<<"Divisible by 3 numbers are: ";
    for(int i=0; i<size; i++) {
        if (arr[i] % 3 == 0) {
           cout<<arr[i]<<" ";
        }
    }

   /*cout<<"Duplicate numbers are: ";
    for (int i=0; i<size; i++) {
        {
        if (arr[i] == arr[i]) {
        cout << arr[i] <<" ";
                break;
        }
     }
  }*/
}

