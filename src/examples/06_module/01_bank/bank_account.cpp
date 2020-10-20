//bank_account.cpp
#include "bank_account.h"

BankAccount::BankAccount(int b) : balance(b)
{
    //code for validating data
    bank_balance += balance;
}

void BankAccount::deposit(int amount)
{   
   if(amount > 0)
    {
        balance += amount;
        bank_balance += amount;    
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && balance >= amount)
    {
        balance -= amount;
        bank_balance -= amount;    
    }
}

int BankAccount::bank_balance = 0;
//FREE FUNCTION-FRIEND OF BANK ACCOUNT CLASS
void display_balance(const BankAccount& a)
{
    std::cout<<"Friend display balance: "<<a.balance<<"\n";
}

std::ostream& operator<<(std::ostream& out, const BankAccount& a)
{
    out<<"Overload display balance: "<<a.balance<<"\n";

    return out;
}

std::istream& operator>>(std::istream& in, BankAccount& a)
{
    int amount;
    std::cout<<"Enter amount: ";
    in>>amount;
    a.balance += amount;

    return in;
}

BankAccount operator+(const BankAccount& a1, const BankAccount& a2)
{
    BankAccount account(a1.balance + a2.balance);

    return account;
}

//FREE FUNCTIONS-DO NOT BELONG TO THE BANKACCOUNT CLASS
void display_bank_account_data(BankAccount& b)
{
    b.deposit(50);
    std::cout<<"Balance: "<<b.get_balance()<<"\n";    
}

BankAccount get_account()
{
    //Class that retrieves DB balance and creates BankAccount
    BankAccount a(1000);
    
    return a;
}

void BranchBank::update_balance(int b)
{
    branch_balance += b;
    BankAccount::bank_balance += b;
}