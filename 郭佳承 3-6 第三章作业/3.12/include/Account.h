#ifndef _ACCOUNT_
#def _ACCOUNT_
using namespace std;

class Account
{
public:
   Account( int );
   void credit( int );
   void debit( int );
   int getBalance();
private:
   int balance;
};
Account::Account( int initialBalance )
{
   balance = 0;
   if ( initialBalance >=0 )  //³õÊ¼Óà¶î
      balance = initialBalance;
   if ( initialBalance < 0 )
      cout << "Error: Initial balance cannot be negative.\n" << endl;
}
void Account::credit( int amount )
{
   balance = balance + amount;
}
void Account::debit( int amount )
{
   if ( amount > balance )
      cout << "Debit amount exceeded account balance.\n" << endl;
   if ( amount <= balance )
   balance = balance - amount;
}
int Account::getBalance()
{
   return balance;
}

#endif
