#include <iostream>
using namespace std;

struct Account {
    string accountType;
    int accountId;
    double balance;
    Account* next;
};

class LinkedList {
private:
    Account* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void addAccount(string accountType, int accountId, double balance) {
        Account* newAccount = new Account;
        newAccount->accountType = accountType;
        newAccount->accountId = accountId;
        newAccount->balance = balance;
        newAccount->next = nullptr;

        if (head == nullptr) {
            head = newAccount;
        } else {
            Account* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newAccount;
        }
    }

    void displayAccounts() {
        Account* temp = head;
        cout << "Accounts:" << endl;
        while (temp != nullptr) {
            cout << "Account Type: " << temp->accountType << ", Account ID: " << temp->accountId << ", Balance: $" << temp->balance << endl;
            temp = temp->next;
        }
    }

    void deposit(int accountId, double amount) {
        Account* temp = head;
        while (temp != nullptr) {
            if (temp->accountId == accountId) {
                temp->balance += amount;
                cout << "Deposit of $" << amount << " successful. New balance: $" << temp->balance << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Account with ID " << accountId << " not found." << endl;
    }

    void withdraw(int accountId, double amount) {
        Account* temp = head;
        while (temp != nullptr) {
            if (temp->accountId == accountId) {
                if (temp->balance >= amount) {
                    temp->balance -= amount;
                    cout << "Withdrawal of $" << amount << " successful. New balance: $" << temp->balance << endl;
                } else {
                    cout << "Insufficient funds for withdrawal." << endl;
                }
                return;
            }
            temp = temp->next;
        }
        cout << "Account with ID " << accountId << " not found." << endl;
    }
};

int main() {
    LinkedList accounts;
    accounts.addAccount("Savings", 1001, 5000.50);
    accounts.addAccount("Checking", 1002, 2500.75);
    accounts.addAccount("Investment", 1003, 10000.0);
    accounts.displayAccounts();
    accounts.deposit(1001, 1000.0);
    accounts.withdraw(1002, 300.0);
    accounts.displayAccounts();
    return 0;
}
