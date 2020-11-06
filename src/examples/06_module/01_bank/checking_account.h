//checking_account.h
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount : public BankAccount
{
public:
    CheckingAccount(){}
    CheckingAccount(int b) : BankAccount(b){}
    int get_balance()const override{return balance + 5;}//override base class function
};

#endif