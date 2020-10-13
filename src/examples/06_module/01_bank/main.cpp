#include "atm.h"
#include "bank_account.h"
#include<iostream>

using std::cout;

int main()
{
	//initial will come from another class that retrieves balance from DB
	BankAccount checking_account(100);//create an instance of the class
	ATM atm(checking_account);
	atm.display_balance();

	/*cout<<"Balance: "<<checking_account.get_balance()<<"\n\n";
	cout<<"Bank balance: "<<checking_account.get_bank_balance()<<"\n\n";

	BankAccount new_account;	
	cout<<"Balance: "<<new_account.get_balance()<<"\n";

	display_bank_account_data(new_account);
	cout<<"Balance: "<<new_account.get_balance()<<"\n";
	cout<<"Bank balance: "<<new_account.get_bank_balance()<<"\n\n";	


	BankAccount account = get_account();
	cout<<"Account balance: "<<account.get_balance()<<"\n\n";
	cout<<"Bank balance: "<<account.get_bank_balance()<<"\n\n";

	BankAccount copied_account = checking_account;
	cout<<"Balance checking: "<<checking_account.get_balance()<<"\n";
	
	cout<<"Balance copied: "<<copied_account.get_balance()<<"\n\n";
	
	//show class copy 
	checking_account.deposit(100);
	copied_account.deposit(100);
	cout<<"Balance checking: "<<checking_account.get_balance()<<"\n";
	cout<<"Balance copied: "<<copied_account.get_balance()<<"\n\n";

	cout<<"Bank balance: "<<copied_account.get_bank_balance();*/

	return 0;
}