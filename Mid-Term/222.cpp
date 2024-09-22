#include <iostream>
using namespace std;
int main()
{
   double Bal; int menu;
   char tran[10];
   cout<<"Enter your Current Balance:"<<endl;
   cin>>Bal;
    for(int i=0; i<5; i++){
   cout<<"ATM Menu:  "<<curBal<<endl;;
        cout<<"1. Withdraw Money"<<endl;
        cout<<"2. Transfer Money"<<endl;
        cout<<"3. Check Recent Transactions"<<endl;
        cout<<"4. Exit"<<endl;


        cin>>menu;
        switch(menu){

    case 1 :
        cout<<"Enter the amount : "<<endl; int Cash;
        cin>>Cash;
        continue;
    case 2 :
        cout<<"Enter the account number : "<<endl; int accNum,amount;
        cin>>accNum;
        cout<<"Enter the amount : "<<endl;

        break;
    case 3 :
        cout<<"Cash withdrawn"<<tran[0]<<endl;
        break;

    default :
        cout<<"Invalid ";
        }

}

}
}
