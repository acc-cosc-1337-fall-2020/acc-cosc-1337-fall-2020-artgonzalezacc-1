//bank_account.cpp
#include "bank_account.h"

void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}