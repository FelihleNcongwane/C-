/* Name: Felihle Ncongwane
 * ID: 80832025
 */

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

// Base class representing a bank account
class BankAccount {
protected:
    std::string accountNumber; // Account number
    std::string accountHolderName; // Account holder name
    double balance; // Account balance
    std::string accountType; // Account type

public:
    // Constructor
    BankAccount(const std::string& number, const std::string& holderName, double initialBalance, const std::string& type)
        : accountNumber(number), accountHolderName(holderName), balance(initialBalance), accountType(type) {}

    // Virtual destructor to ensure correct deletion of derived objects
    virtual ~BankAccount() {}

    // Deposit the specified amount into the account
    virtual void deposit(double amount) {
        balance += amount;
    }

    // Withdraw the specified amount from the account
    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            std::cout << "Insufficient balance." << std::endl;
        }
    }

    // Display the account information
    virtual void display() const {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Balance: SZL " << std::fixed << std::setprecision(2) << balance << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
    }

    // Getter for the balance attribute
    double getBalance() const {
        return balance;
    }

    // Getter for the account holder name
    std::string getAccountHolderName() const {
        return accountHolderName;
    }

    // Getter for the account type
    std::string getAccountType() const {
        return accountType;
    }
};

int main() {
    std::vector<BankAccount*> accounts;

    // Create some bank accounts
    BankAccount* account1 = new BankAccount("S76582024", "Johane Ndlangamandla", 4000.00, "Savings");
    BankAccount* account2 = new BankAccount("C46732026", "Dzeliwe Ndwandwe", 600.00, "Checking");
    BankAccount* account3 = new BankAccount("S56472024", "Babazile Sibanda", 2000.50, "Savings");
    BankAccount* account4 = new BankAccount("C35352025", "Nokuthula Dlamini", 700.07, "Checking");

    // Add the accounts to the vector
    accounts.push_back(account1);
    accounts.push_back(account2);
    accounts.push_back(account3);
    accounts.push_back(account4);

    // Display the account information
    for (const auto& account : accounts) {
        account->display();
        std::cout << std::endl;
    }

    // Calculate the total balance of all accounts
    double totalBalance = 0.0;

    for (const auto& account : accounts) {
        totalBalance += account->getBalance();
    }

    // Display the combined account information
    std::cout << "Total combined balance: SZL " << std::fixed << std::setprecision(2) << totalBalance << std::endl;

    // Clean up the dynamically allocated memory
    for (const auto& account : accounts) {
        delete account;
    }
    accounts.clear();

    return 0;
}
