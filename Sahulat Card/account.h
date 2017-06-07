#ifndef ACCOUNT_H
#define ACCOUNT_H


#include<iostream>
#include"money.h"
#include"date.h"
#include"transaction.h"

using namespace std;

class Account
{
	private:
		Money balance;
	protected:
		vector <Transaction> t_vec;
	public:
		Account();
		
		Account(Money b);
		
		virtual Money access()=0;
		
		void setbalance(Money b);
		
		void mutateadd(Money b);
		
		virtual void addR(Money b)=0;
		
		void mutatesub(Money b);
		
		virtual bool  purchase(Money amount);
		
		void transactionHistory(ostream s ,const Date &start , const Date &end)const; 
		
		virtual void print()=0;
		
		virtual void print_Transaction(Date s,Date e)=0;
	
};

#endif
