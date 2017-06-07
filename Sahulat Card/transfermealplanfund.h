#ifndef TRANSFERMEALPLANFUND_H
#define TRANSFERMEALPLANFUND_H


#include"account.h"
#include"mealplan.h"
#include"money.h"
class TransferMealPlanFund:public Account
{
	private:
		MealPlan *Tplan;
	public:
		TransferMealPlanFund();
		
		TransferMealPlanFund(Money m);
		
		TransferMealPlanFund(MealPlan *m);
		
		void addR(Money amount);
		
		 bool purchase(Money amount);
		
		void addMealPlan(MealPlan* m);
		
		void print();
		
		Money access();
		
		~TransferMealPlanFund();
		
		void print_Transaction(Date s,Date e);
};

#endif

