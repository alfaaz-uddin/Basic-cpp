#include<iostream>
using namespace std;

class ATMachine {
private:
    double balance; //agulo change kore dibi must
    double withdrawalAmount;
    double transferAmount;


public:
    ATMachine(double initialBalance) {
        balance = initialBalance;
        withdrawalAmount = 0;
        transferAmount = 0;
    }

    void withdrawMoney(double amount) {
        if(amount > balance){
            cout<<"Insufficient balance!"<<endl;
        } else {
            balance -= amount;
            withdrawalAmount = amount;
            cout<<"Withdrawal successful. Current balance: TK"<<balance<<endl;
        }
    }

    void transferMoney(double amount) {
        if(amount > balance) {
            cout<<"Insufficient balance!"<<endl;
        } else {
            balance -=  amount;
            transferAmount = amount;
            cout<<"Transfer successful. Current balance: "<<balance<<endl;
        }
    }

    void addTransaction() {
        cout<<"Last withdraw "; // ekhane last cash history add korbi
        cout<<"Last trannsfer ";
    }
};

int main() {
    ATMachine atm(1000); // Initial balance, icca hole user input nis

    int choice;
    double amount;

    while (true) {
        cout<<"1. Withdraw Money" << endl;
    cout << "2. Transfer Money" << endl;
    cout << "3. Check Recent Transactions" << endl;
    cout << "4. Exit" << endl;

        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                atm.withdrawMoney(amount);
                break;
            case 2:
                cout << "Enter amount to transfer: ";
                cin >> amount;
                atm.transferMoney(amount);
                break;
            case 3:
                atm.addTransaction();
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

