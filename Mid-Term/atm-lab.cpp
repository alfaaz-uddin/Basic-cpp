//code by Alfaz with the concept of simple ATM system

#include <iostream>
using namespace std;
int main()
{
   double curBal; int menu;
   int tran1=0, tran2=0;
   cout<<"Enter your Current Balance: BDT"<<endl;
   cin>>curBal;

    for(int i=0; i<3; i++){
   cout<<"ATM Menu: Your current balance is  BDT "<<curBal<<endl;;
        cout<<"1. Withdraw Money"<<endl;
        cout<<"2. Transfer Money"<<endl;
        cout<<"3. Check Recent Transactions"<<endl;
        cout<<"4. Exit"<<endl;

        cin>>menu;
        switch(menu){

    case 1 :
        cout<<"Enter the amount : "<<endl; int wCash;
        cin>>wCash;
        if(curBal>wCash){
            curBal=curBal-wCash;
            cout<<"Success! You have currently "<<curBal<<" TAKA left."<<endl;
           tran1=wCash;
        } if(curBal<wCash) {
        cout<<"Insufficient balance!"<<endl;}
        break;
    case 2 :
        cout<<"Enter the account number : "<<endl; int accNum,amount;
        cin>>accNum;
        cout<<"Enter the amount : "<<endl;
        cin>>amount;
        if(curBal<amount){
            cout<<"Insufficient balance!"<<endl;
        } if(curBal>amount) {
            curBal=curBal-amount;
        cout<<"Money sent! You have currently "<<curBal<<" TAKA left."<<endl;
        tran2=amount; }
        break;
    case 3 :
        cout<<"Recent transactions : "<<endl;
        cout<<"Last cash withdrawn - "<<tran1<<endl;
        cout<<"Last cash transferred - "<<tran2<<endl;
        break;
    case 4 :
        cout<<"Thank you for using our ATM, good day!"<<endl;
        break;
         default :
        cout<<"Invalid, please select a correct option."<<endl;

        }
     }

 }


