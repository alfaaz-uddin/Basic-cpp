#include<iostream>
using namespace std;

class Account{
    string name;
    int accNo;
    double balance;

public:
    Account(string name, int accNo, double balance){ //- local variable
        //member variable = local variable , mainly we use 'this->' to differentiate between local and member variable
        this->name = name;
        this->accNo = accNo;
        this->balance = balance;
        //balance = balance + 500;
        //cout<<balance<<" "<<this->balance<<endl; //here 1000 will be printed first as we changed the local variable balance's value
                                            //this->balance is member variable whose value we did not change, so 500 will be printed
    }
    double getBalance();
    void deposit(double amount){
        balance = balance + amount;
        cout<<accNo<<": "<<amount<<" TK is deposited. Current balance is "<<balance<<endl;
    }
    void withdraw(double amount){
        balance = balance - amount;
        cout<<accNo<<": "<<amount<<" TK is withdrawn. Current balance is "<<balance<<endl;
    }
    void show(){ //string name = "abc";
        cout<<"Name: "<<name<<endl;
        cout<<"Account number: "<<accNo<<endl;
        cout<<"Current balance: "<<balance<<endl;
    }
};

  //scope operator
double Account::getBalance(){ return balance; } //this is just to show that we can write function outside the class

int main(){
    Account a1("Sadia",101,500);
    a1.show();
    a1.deposit(500);

    Account a2("Salsabil",102,1000);
    a2.show();
    a2.withdraw(300);

    cout<<a2.getBalance();
}
