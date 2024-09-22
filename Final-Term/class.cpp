#include<iostream>
using namespace std;

void auto_static (void){
    int autoVar = 1;
    static int staticVar = 1;
    cout<<"automatic: " <<autoVar<<"  static:"<<staticVar<<endl;
    ++autoVar;
    ++staticVar;
}

int main(){
    int i;
    for(i = 0; i < 6; ++i ){
        auto_static();
    }
}

