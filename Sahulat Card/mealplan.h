#ifndef MEALPLAN_H
#define MEALPLAN_H


#include"money.h"
class MealPlan
{
	private:
		int discount;
		Money i_fund;
		
	
	public:
		
		Money initial();
        
		int Discount();
			
		void set(Money m);
		
		Money add(Money m);
		
		Money sub(Money m);
		
		void initialls(Money m);
		
		void discountls(int n);
		
		
		
};

#endif
