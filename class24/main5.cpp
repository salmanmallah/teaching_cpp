#include <iostream>
#include <map>
using namespace std;

// Banking System for Hooriya (Role Number: 021)

struct Account {
	string owner;
	double balance;
};

map<int, Account> accounts;
int accountCounter = 1001;

void createAccount() {
	string name;
	double initialDeposit;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter initial deposit amount: ";
	cin >> initialDeposit;
	accounts[accountCounter] = {name, initialDeposit};
	cout << "Account created successfully! Your account number is: "
	     << accountCounter << endl;
	accountCounter++;
}

void deposit(int accountNumber) {
	if (accounts.find(accountNumber) == accounts.end()) {
		cout << "Account not found!" << endl;
		return;
	}
	double amount;
	cout << "Enter deposit amount: ";
	cin >> amount;
	accounts[accountNumber].balance += amount;
	cout << "Deposit successful. New balance: "
	     << accounts[accountNumber].balance << endl;
}

void withdraw(int accountNumber) {
	if (accounts.find(accountNumber) == accounts.end()) {
		cout << "Account not found!" << endl;
		return;
	}
	double amount;
	cout << "Enter withdrawal amount: ";
	cin >> amount;
	if (amount > accounts[accountNumber].balance) {
		cout << "Insufficient funds!" << endl;
	} else {
		accounts[accountNumber].balance -= amount;
		cout << "Withdrawal successful. New balance: "
		     << accounts[accountNumber].balance << endl;
	}
}

void showBalance(int accountNumber) {
	if (accounts.find(accountNumber) == accounts.end()) {
		cout << "Account not found!" << endl;
		return;
	}
	cout << "Account Holder: " << accounts[accountNumber].owner
	     << "\nBalance: " << accounts[accountNumber].balance << endl;
}

void closeAccount(int accountNumber) {
	if (accounts.find(accountNumber) == accounts.end()) {
		cout << "Account not found!" << endl;
		return;
	}
	accounts.erase(accountNumber);
	cout << "Account closed successfully." << endl;
}

int main() {
	int choice;
	do {
		cout << "\nBanking System - Hooriya (021)" << endl;
		cout << "1. Create Account" << endl;
		cout << "2. Deposit" << endl;
		cout << "3. Withdraw" << endl;
		cout << "4. Balance Enquiry" << endl;
		cout << "5. Close Account" << endl;
		cout << "6. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 1) {
			createAccount();
		} else if (choice == 2 || choice == 3 || choice == 4 || choice == 5) {
			int accNum;
			cout << "Enter your account number: ";
			cin >> accNum;
			if (choice == 2)
				deposit(accNum);
			else if (choice == 3)
				withdraw(accNum);
			else if (choice == 4)
				showBalance(accNum);
			else if (choice == 5)
				closeAccount(accNum);
		}
	} while (choice != 6);

	cout << "Thank you for using Hooriya's Banking System!" << endl;
	return 0;
}
