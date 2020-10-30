//atm.cpp
#include "atm.h"

using std::cout; 
ATM::ATM() 
{
    customers.push_back(Customer(1, "John Doe"));
    customers.push_back(Customer(2, "Mary Doe"));
    customers.push_back(Customer(3, "John Hancock"));
    customers.push_back(Customer(4, "Mary Hancock"));
}

void ATM::scan_card()
{
    customer_index = rand() % customers.size()-1 + 1;//random from  to 3
    std::cout<<customer_index<<"\n";

    cout<<"\nWelcome to ACC bank\n";
    cout<<"1-Checking Account\n";
    cout<<"2-Savings Account\n";
    cout<<"Enter your selection\n";
    std::cin>>account_index;
}

void ATM::display_balance()
{
    std::unique_ptr<BankAccount>& account = customers[customer_index].get_account(account_index-1);
    cout<<"Balance: "<<account->get_balance()<<"\n";
}
