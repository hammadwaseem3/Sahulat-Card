#ifndef FLEXRUPEES_H
#define FLEXRUPEES_H


#include"account.h"
#include"money.h"

class FlexRupees:public Account
{
	private:
		Money F_money;
	public:
		FlexRupees();
		
		FlexRupees(Money m);
		
		bool purchase(Money amount);
		
		void addR(Money amount);
		
		void Deposit(Money amount);
		
		void print();
		
		Money access();

        void print_Transaction(Date s,Date e);
};

#endif
