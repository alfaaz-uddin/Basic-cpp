#include <iostream>
#include<string.h>
using namespace std;
int main(){
    char bd[] = "BANGLADESH";
    char wc[] = "WORLDCUP\0 2023";
    //cout<<strstr(bd,"NGL")<<endl;
    cout<<bd<<" "<<wc<<endl;
    cout<<strlen(bd)<<endl;
    cout<<strlen(wc)<<endl;
    cout<<strchr(bd,'D')<<strstr(wc,"CUP")<<endl;
    cout<<strcat(bd, wc)<<endl;
    cout<<strcmp(bd, wc)<<endl;
    cout<<strcmp(strchr(bd,'W'), wc)<<endl;
    cout<<strlen(bd)<<endl<<strlen(wc)<<endl;
return 0;
}
