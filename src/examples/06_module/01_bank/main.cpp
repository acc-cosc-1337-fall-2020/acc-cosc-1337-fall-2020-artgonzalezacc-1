#include "bank_account.h"
#include<iostream>

using std::cout;

int main()
{
	//initial will come from another class that retrieves balance from DB
	BankAccount checking_account(100);//create an instance of the class
	cout<<"Balance: "<<checking_account.get_balance()<<"\n\n";
	
	BankAccount new_account;	
	cout<<"Balance: "<<new_account.get_balance()<<"\n";

	display_bank_account_data(new_account);
	
	cout<<"Balance: "<<new_account.get_balance()<<"\n";

	BankAccount account = get_account();
	cout<<"Account balance: "<<account.get_balance()<<"\n";

	return 0;
}