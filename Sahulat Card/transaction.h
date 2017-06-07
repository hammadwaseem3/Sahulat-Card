#ifndef TRANSACTION_H
#define TRANSACTION_H

#include<iostream>
#include<vector>
#include"date.h"
#include"money.h"
enum type
{
	deposit,debit
};

class Transaction
{
	private:
		Date date;
		type t;
		Money amount;
		
	public:
		Transaction(Date d ,type T ,Money m);
		void print(Date s,Date e);
};


#endif
