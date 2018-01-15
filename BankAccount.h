#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H



using namespace std;

class BankAccount
{
public:
	BankAccount();
	~BankAccount();

	//Constructor
	BankAccount(double inital_amount, std::string name);

	//Modification Member Functions
	void change_name(std::string name);
	void deposit(double amount);
	void withdraw(double amount);
	string name();
	double amount();

private:
	double bank_amount;
	string owner_name;
};

#endif    //BANKACCOUNT_H