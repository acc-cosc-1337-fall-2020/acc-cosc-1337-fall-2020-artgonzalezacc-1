//bank_account.h
class BankAccount
{
public:
    BankAccount() : BankAccount(0)/*delegating constructor*/ {/*empty code block*/}//new accounts
    BankAccount(int b);
    int get_balance()const{return balance;}//inline function-const makes a function read only
    void deposit(int amount);
    void withdraw(int amount);

private://access specifier
    int balance;//class member
};//VERY IMPORTANT DON'T FORGET THE SEMICOLON!!!!!!!


//THESE FUNCTIONS DON'T BELONG TO THE BANKACCOUNT CLASS
void display_bank_account_data(BankAccount& b);//free function
BankAccount get_account();//free function