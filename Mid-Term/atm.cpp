#include <iostream>
#include <iomanip>
#include <vector>

class ATM {
private:
    double balance;
    std::vector<std::string> transactions;

public:
    ATM(double initialBalance) : balance(initialBalance) {}

    void displayMenu() {
        std::cout << "ATM Menu:\n";
        std::cout << "1. Withdraw Money\n";
        std::cout << "2. Transfer Money\n";
        std::cout << "3. Check Recent Transactions\n";
        std::cout << "4. Exit\n";
    }

    void withdrawMoney() {
        double withdrawAmount;
        std::cout << "Enter the amount to withdraw: $";
        std::cin >> withdrawAmount;

        if (withdrawAmount > 0 && withdrawAmount <= balance) {
            balance -= withdrawAmount;
            transactions.push_back("Withdrawal: -$" + std::to_string(withdrawAmount));
            std::cout << "Withdrawal successful. Current balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds.\n";
        }
    }

    void transferMoney() {
        std::string recipientAccount;
        double transferAmount;
        std::cout << "Enter the recipient's account number: ";
        std::cin.ignore();
        std::getline(std::cin, recipientAccount);

        std::cout << "Enter the transfer amount: $";
        std::cin >> transferAmount;

        if (transferAmount > 0 && transferAmount <= balance) {
            balance -= transferAmount;
            transactions.push_back("Transfer to " + recipientAccount + ": -$" + std::to_string(transferAmount));
            std::cout << "Transfer successful. Current balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid transfer amount or insufficient funds.\n";
        }
    }

    void checkTransactions() {
        std::cout << "Recent Transactions:\n";
        for (const auto &transaction : transactions) {
            std::cout << "- " << transaction << std::endl;
        }
        std::cout << "Current balance: $" << balance << std::endl;
    }
};

int main() {
    double initialBalance;
    std::cout << "Enter your initial account balance: $";
    std::cin >> initialBalance;

    ATM atm(initialBalance);

    int choice;
    do {
        atm.displayMenu();
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                atm.withdrawMoney();
                break;
            case 2:
                atm.transferMoney();
                break;
            case 3:
                atm.checkTransactions();
                break;
            case 4:
                std::cout << "Exiting ATM. Thank you!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
