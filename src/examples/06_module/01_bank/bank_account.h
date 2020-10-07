//bank_account.h
class BankAccount
{
public:
    int get_balance()const{return balance;}//inline function
    void deposit(int amount);

private://access specifier
    int balance{0};//class member
};//VERY IMPORTANT DON'T FORGET THE SEMICOLON!!!!!!!

