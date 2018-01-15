#include <iostream>
#include "BankAccount.h"
#include <string>


BankAccount::BankAccount()
{
	bank_amount = 0;
}

BankAccount::~BankAccount()
{
}

//Constructor that initilizes amount to 0, and owner name to an empty string 
BankAccount::BankAccount(double initial_amount, std::string name)
{
	 initial_amount = 0.0;
	 name = " ";
	//	name = inital_name;
}

//Adds user's amount to the current amount
void BankAccount::deposit(double amount)
{
	bank_amount += amount;
}

//Subtracts the user's amount from the current amount
void BankAccount::withdraw(double amount)
{
	bank_amount -= amount;
}

//Changes the account's owner 
void BankAccount::change_name(std::string name)
{
	owner_name = name;
}

//Returns the bank account owner's name
string BankAccount::name()
{
	return owner_name;
}


//Returns the bank account owner's current amount
double BankAccount::amount()
{
	return bank_amount;
}