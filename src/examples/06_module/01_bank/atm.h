//atm.h
#include<stdlib.h>//rand()
#include "bank_account.h"
#include "customer.h"
#include<iostream>
#include<vector>

#ifndef ATM_H
#define ATM_H

class ATM
{
public:
    ATM();
    void scan_card();
    void display_balance();
private:
    std::vector<Customer> customers;
    int customer_index;
    int account_index;
};

#endif