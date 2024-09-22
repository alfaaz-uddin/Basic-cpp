#include <iostream>
using namespace std;

int main()
{

    float arr1[6] = {2.2,4.4,6.6,8.8,10.10,12.12};
    int arr2[6] = {2,4,6,8,10,12};
    for (int i = 0; i < 6; i++) {
        float result =arr1[i]*arr2[5 - i];
        cout<<"The multiplication is "<<arr1[i] << "X" << arr2[5 - i]<<" = "<<result<<endl;
    }
}

