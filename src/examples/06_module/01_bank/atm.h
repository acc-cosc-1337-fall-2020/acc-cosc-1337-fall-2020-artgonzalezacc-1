//atm.h
#include<stdlib.h>//rand()
#include "bank_account.h"
#include<iostream>
#include<vector>

#ifndef ATM_H
#define ATM_H

class ATM
{
public:
    ATM();
    void scan_card();
    void display_balance()const;
private:
    int get_balance_from_db();
    std::vector<BankAccount> accounts;
    int bank_account_index;
};

#endif