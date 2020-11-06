#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<memory>

using std::unique_ptr; using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Bank account initial balance")
{
	unique_ptr<BankAccount> account(new CheckingAccount(100));

	REQUIRE(account->get_balance() == 105);
}

TEST_CASE("Test bank account deposit")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(500);
	REQUIRE(account->get_balance() == 505);

	account->deposit(100);

	REQUIRE(account->get_balance() == 605);

}

TEST_CASE("Test bank account deposit with negative amount")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(500);
	REQUIRE(account->get_balance() == 505);

	account->deposit(-100);

	REQUIRE(account->get_balance() == 505);

}


TEST_CASE("Test bank account withdraw")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(500);
	REQUIRE(account->get_balance() == 501);

	account->deposit(100);
	REQUIRE(account->get_balance() == 601);

	account->withdraw(50);
	REQUIRE(account->get_balance() == 551);
}

TEST_CASE("Test bank account withdraw with negative amount")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(500);
	REQUIRE(account->get_balance() == 501);

	account->deposit(100);
	REQUIRE(account->get_balance() == 601);

	account->withdraw(-50);
	REQUIRE(account->get_balance() == 601);
}

TEST_CASE("Test Bank account with default constructor")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>();

	REQUIRE(account->get_balance() == 5);
}

TEST_CASE("Test bank account deposit with default constructor")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>();
	REQUIRE(account->get_balance() == 1);

	account->deposit(100);

	REQUIRE(account->get_balance() == 101);

}

TEST_CASE("Test bank account bank balance static variable")
{
	unique_ptr<BankAccount> account1 = make_unique<CheckingAccount>(1000);
	unique_ptr<BankAccount> account2 = make_unique<SavingsAccount>(3000);
	unique_ptr<BankAccount> account3 = make_unique<CheckingAccount>(2000);

	REQUIRE(account1->get_bank_balance() == 8450);
}