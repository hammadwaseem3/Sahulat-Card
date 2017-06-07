#include"transaction.h"

Transaction::Transaction(Date d ,type T ,Money m)
{
	date=d;
	t=T;
	amount=m;
	cout << "Date : " << date <<endl;
	if(t == debit)
	cout << "Type : Debit\n";
	if(t == deposit)
	cout << "Type : Deposit\n";

    cout << "Money : " << amount;
}

void Transaction::print(Date s,Date e)
{
	if(date >=  s  && date <= e)
	{
	cout << "Date : " << date <<endl;
	if(t == debit)
	cout << "Type : Debit\n";
	if(t == deposit)
	cout << "Type : Deposit\n";

    cout << "Money : " << amount;

}
}
