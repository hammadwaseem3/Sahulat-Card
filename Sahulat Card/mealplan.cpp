#include"mealplan.h"


Money MealPlan::initial()
{
	return i_fund;
}
        
int MealPlan::Discount()
{
	return discount;
}

void MealPlan::initialls(Money m)
{
	//cout << m << endl;
	i_fund=m;
	
}
		
void MealPlan::discountls(int n)
{
	discount=n;
}


void MealPlan::set(Money m)
{
	i_fund=m;
}
		
Money MealPlan::add(Money m)
{
	i_fund=i_fund+m;
	return i_fund;
}

		
Money MealPlan::sub(Money m)
{
	i_fund=i_fund-m;
	return i_fund;
}
