#ifndef MEALPLANFUND_H
#define MEALPLANFUND_H


#include "account.h"
#include "mealplan.h"
class MealPlanFund:public Account
{
	private:
		MealPlan *plan;
	public:
		MealPlanFund();
		
		MealPlanFund(MealPlan* m);
		
		void addMealPlanFund(MealPlan* m);
 		
		void endMealPlanFund(); 
		
		void mutateadd(Money b);
		
		Money access();
		
		void addR(Money b);
		
		bool purchase(Money amount);
		
		void discount();
		
		void print();
		
		~MealPlanFund();
		
		void print_Transaction(Date s,Date e);
		
		MealPlanFund operator = (MealPlanFund m);
 	
};

#endif
