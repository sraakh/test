#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BankAccount 
{
	
	//hiii
	//ooo
private:
    string accountNumber;
    double balance;
    string owner;
    vector<string> transactionHistory;

public:

    BankAccount(string accNum, int Balance, string ownerName)
        : accountNumber(accNum), balance(Balance), owner(ownerName) {}


    void deposit(int amount) {
        balance += amount;
        transactionHistory.push_back("+" + to_string(amount));
    }


    void withdraw(int amount) {
        if (balance >= amount) {
            balance -= amount;
            transactionHistory.push_back("-" + to_string(amount));
        } else {
            cout << "you can't take that much." << endl;
        }
    }


    int getBalance() const {
        return balance;
    }

    string getAccountNumber() const {
        return accountNumber;
    }

    string getOwner() const {
        return owner;
    }

    string getTransactionHistory() const {
        string history;
        for (const auto& transaction : transactionHistory) {
            history += transaction + "\n";
        }
        return history;
    }


    void transferFunds(BankAccount& fromAccount, BankAccount& toAccount, int amount) {
        if (fromAccount.balance >= amount) {
            fromAccount.balance -= amount;
            toAccount.balance += amount;
            fromAccount.transactionHistory.push_back( "to " + toAccount.owner + ": +" + to_string(amount));
            toAccount.transactionHistory.push_back("from " + fromAccount.owner + ": -" + to_string(amount));
        } else {
            cout << "you can't move that much." << endl;
        }
    }


    BankAccount& operator+=(int amount) {
        deposit(amount);
        return *this;
    }

    BankAccount& operator-=(int amount) {
        withdraw(amount);
        return *this;
    }

    friend ostream& operator<<(ostream& os, const BankAccount& account) {
        os << "Account Number: " << account.accountNumber << "\nOwner: " << account.owner << "\nBalance: " << account.balance << endl;
        return os;
    }
};

int main() {
    BankAccount account1("123456", 1000, "Sara");
    BankAccount account2("654321", 800, "Harry");
    BankAccount account3("789012", 1100, "Jacob");
    BankAccount account4("345678", 350, "Taylor");


    cout << account1 << endl;
    cout << account2 << endl;
    cout << account3 << endl;
    cout << account4 << endl;

    account1.deposit(200);
    account2.withdraw(100);
    account3.deposit(300);
    account4.withdraw(50);


    cout << "\nAfter transactions:" << endl;
    cout <<"account 1:\n"<< account1.getTransactionHistory() <<account1.getBalance()<< endl;
    cout <<"account 2:\n"<< account2.getTransactionHistory() << account2.getBalance()<<endl;
    cout <<"account 3:\n"<<account3.getTransactionHistory() << account3.getBalance()<<endl;
    cout <<"account 4:\n"<< account4.getTransactionHistory() << account4.getBalance()<<endl;


    account1.transferFunds(account1, account2, 300);


    cout << "\nAfter transfer:" << endl;
    cout <<"account 1:\n"<< account1.getTransactionHistory() <<"the balance after is: \n"<< account1.getBalance()<<endl;
    cout <<"account 2:\n"<< account2.getTransactionHistory() <<"the balance after is: \n"<< account2.getBalance()<<endl;

    return 0;
}
