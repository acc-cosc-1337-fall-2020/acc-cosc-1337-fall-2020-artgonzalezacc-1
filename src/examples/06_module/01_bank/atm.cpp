//atm.cpp
#include "atm.h"

using std::cout;
ATM::ATM() 
{
    accounts.push_back(BankAccount(get_balance_from_db()));
    accounts.push_back(BankAccount(get_balance_from_db()));
    accounts.push_back(BankAccount(get_balance_from_db()));
    accounts.push_back(BankAccount(get_balance_from_db()));
    accounts.push_back(BankAccount(get_balance_from_db()));
}

void ATM::scan_card()
{
    bank_account_index = rand() % accounts.size()-1;
}

void ATM::display_balance()const
{
    cout<<"Balance: "<<accounts[bank_account_index].get_balance()<<"\n";
}

int ATM::get_balance_from_db()
{
   return rand() % 10000 + 1;
}
