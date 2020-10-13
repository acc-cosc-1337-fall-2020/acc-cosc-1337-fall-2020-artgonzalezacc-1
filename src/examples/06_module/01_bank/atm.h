//atm.h
#include "bank_account.h"
#include<iostream>
#ifndef ATM_H
#define ATM_H

class ATM
{
public:
    ATM(BankAccount& a) : account(a){}
    void display_balance()const;

private:
    BankAccount& account;
};

#endif