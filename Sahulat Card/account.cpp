#include"account.h"

Account::Account():balance(0,0)
{
}
		
Account::Account(Money b)
{
	balance=b;
}

/*Money Account::access() 
{
    return 	balance;
}*/
	
void Account::mutateadd(Money b)
{
	balance=balance + b;
}

void Account::mutatesub(Money b)
{
	balance=balance - b;
}
		
void Account::setbalance(Money b)
{
	balance = b;
}
		
bool Account::purchase(Money amount)
{   
    if(balance < amount)
    {
	balance=balance-amount;
    return 1;
	}
	else
	return 0;
}
		
void Account::transactionHistory(ostream s ,const Date &start , const Date &end)const
{
	cout << balance;
}

/*		
void Account::print() 
{
	cout << "Money in Account: " << balance;
}*/
	
