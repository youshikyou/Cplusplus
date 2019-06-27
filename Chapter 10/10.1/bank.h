#pragma once

#ifndef bank
#define bank

#include <iostream>
#include<cstring>
#include <string>

class BankAccount
{
private:
	char name[20];
	char accnum[30];
	double balance;

public:
	BankAccount();
	BankAccount(const char *client, const char*acc, double bal);
	~BankAccount();
	void show()const;
	void deposit(double cash);
	void withdraw(double cash);
};


#endif // !bank.h
