//bank_account.h
#ifndef BANK_ACCOUNT_H//header guards
#define BANK_ACCOUNT_H//header guards

class BankAccount
{
public:
    BankAccount() : BankAccount(0)/*delegating constructor*/ {/*empty code block*/}//new accounts
    BankAccount(int b);
    int get_balance()const{return balance;}//inline function-const makes a function read only
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}
private://access specifier
    int balance;//class member
    static int bank_balance;
};//VERY IMPORTANT DON'T FORGET THE SEMICOLON!!!!!!!

#endif//header guards

//THESE FUNCTIONS DON'T BELONG TO THE BANKACCOUNT CLASS
void display_bank_account_data(BankAccount& b);//free function
BankAccount get_account();//free function