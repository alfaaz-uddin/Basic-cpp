#include <iostream>
using namespace std;

class ATMachine {
private:
    double balance;
    double withdrawalAmount;
    double transferAmount;

public:
    ATMachine(double initialBalance) {
        balance = initialBalance;
        withdrawalAmount = 0.0;
        transferAmount = 0.0;
    }

    void withdrawMoney(double amount) {
        if(amount > balance){
            cout<<"Insufficient balance!"<<endl;
        } else {
            balance = balance - amount;
            withdrawalAmount = amount;
            cout<<"Withdrawal successful. Current balance: TK"<<balance<<endl;
        }
    }

    void transferMoney(double amount) {
        if(amount > balance) {
            cout<<"Insufficient balance!"<<endl;
        } else {
            balance = balance - amount;
            transferAmount = amount;
            cout<<"Transfer successful. Current balance: "<<balance<<"TK"<<endl;
        }
    }
    void checkTransactions() {
        cout<<"Recent Transactions:" << endl;
        cout<<"Recent money withdrawn :" <<withdrawalAmount<<endl;
        cout<<"Recent money transferred :" <<transferAmount<<endl;

    }

};

int main() {
    double initialBalance;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    ATMachine atm(initialBalance);
    int choice;
    double amount;

    cout << " ATM Menu:" << endl;
    cout << "1. Withdraw Money" << endl;
    cout << "2. Transfer Money" << endl;
    cout << "3. Check Recent Transactions" << endl;
    cout << "4. Exit" << endl;

    while (true)
     {
        cout<<"Enter your choice from the menu: ";
        cin>>choice;

        switch (choice) {
            case 1:
                cout<<"Enter amount to withdraw: TK ";
                cin>>amount;
                atm.withdrawMoney(amount);
                break;
            case 2:
                cout<<"Enter amount to transfer: TK ";
                cin>>amount;
                atm.transferMoney(amount);
                break;
            case 3:
                atm.checkTransactions();
                break;
            case 4:
                cout<<"Thank you for using the ATM." << endl;
                return 0;
            default:
                cout<<"Invalid choice. Please try again." << endl;
        }
    }


}
