#include<iostream>
using namespace std;

int main(){
    cout<<"Weeekly Sale Calculator!"<<endl;
    cout<<"Enter Sales for the week:"<<endl;
    int day[7], totalSale=0, avgSale, count=0;
    //taking inputs
    for(int i = 0;i<7;i++){
        cout<<"Day "<<i+1<<": ";
        cin>>day[i];
        totalSale+=day[i];
    }
    cout<<"Total weekly sale: "<<totalSale<<endl;
    avgSale = totalSale/7;
    cout<<"Average Daily sale: "<<avgSale<<endl;
    for(int i = 0;i<7;i++){
        if(day[i]<avgSale){
            count++;
        }
    }
    cout<<"Count of the Day Below Average: "<<count<<endl;
    if(totalSale>=10000){
        cout<<"Weekly total target achieved."<<endl;
    }else{
        cout<<"Weekly total target not achieved."<<endl;
    }
}

