#include <iostream>
#include <cstdlib>
#include "BankAccount.h"
#include <string>

using namespace std;

int main()
{
	BankAccount account;
	std::string user_input;
	std::string new_name;
	std::string deposit_amount;
	std::string withdraw_amount;

	cout << "Please Type A Command. Commands: Check Amount, Check Owner, Change Owner, Deposit, Withdraw, Exit";
	getline(cin, user_input);
	

	while (user_input != "Exit")
	{
		if (user_input == "Check Amount")
		{
			cout << "The Bank Amount is: $" << account.amount() << endl;
		//	user_input = "";
		}
		else if (user_input == "Check Owner")
		{
			cout << "The Owner is " << account.name() << endl;
		//	user_input = "";
		}
		else if (user_input == "Change Owner")
		{
			cout << "Who is the New Owner?" << endl;
			getline(cin, new_name);
			account.change_name(new_name);
		//	user_input = "";
		}
		else if (user_input == "Deposit")
		{
			cout << "How Much Would You Like to Deposit?" << endl;
			getline(cin, deposit_amount);
			int d_amount = std::stoi(deposit_amount);
			account.deposit(d_amount);
			//user_input = "";
		}
		else if (user_input == "Withdraw")
		{
			cout << "How Much Would You Like to Withdraw?" << endl;
			getline(cin, withdraw_amount);
			int w_amount = std::stoi(withdraw_amount);
			account.withdraw(w_amount);
		//user_input = "";
		}
		else
		{
			cout << "Please Type A Valid Command!" << endl;
		getline(cin, user_input);
		}
    cout << "Please Type A Command. Commands: Check Amount, Check Owner, Change Owner, Deposit, Withdraw, Exit";
	getline(cin, user_input);
	}
	return EXIT_SUCCESS;
}