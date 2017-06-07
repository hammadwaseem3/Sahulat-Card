#include"mealplanfund.h"

MealPlanFund::MealPlanFund()
{
	plan=0;
}
		
MealPlanFund::MealPlanFund(MealPlan* m)
{
//	cout << m->Discount() <<endl;
//	cout << m->initial();
	plan=new MealPlan;
	plan=m;
	//cout << plan->Discount();
	//cout << plan->initial();
	//MealPlanFund::print();
}
		
void MealPlanFund::addMealPlanFund(MealPlan* m)
{
	plan=new MealPlan;
	*plan=*m;
}
 		
void MealPlanFund::endMealPlanFund()  
{
	delete plan;
	plan=0;
}

MealPlanFund MealPlanFund::operator = (MealPlanFund m)
{

 			MealPlanFund meal;
 			meal=m;
 			return meal;
}

void MealPlanFund::mutateadd(Money b)
{
	plan->set(plan->add(b));
    
}

void MealPlanFund::addR(Money amount)
{
	plan->set(plan->add(amount));
    
}

void MealPlanFund::print_Transaction(Date s,Date e)
{
   for(int i=0;i < t_vec.size();i++)
   {
   	t_vec[i].print(s,e);
	   }	
}

bool MealPlanFund::purchase(Money amount)
{
	//cout << amount;
	//return Account::purchase(amount);
	if(plan->initial() > amount)
    {
    	Date d;
    	Transaction t(d,debit,amount);
    	t_vec.push_back(t);
    Money temp(plan->Discount(),0);
	amount=amount - temp;
	
	//balance=balance-amount;
	plan->set(plan->sub(amount));
    return 1;
	}
	else
	return 0;
}

Money MealPlanFund::access()
{
	return plan->initial();
}	
		
void MealPlanFund::discount()
{
	int n;
	cout <<"Enter the discount\n";
	cin >> n;
	plan->discountls(n);
}
		
void MealPlanFund::print()
{
	cout << plan->Discount() << endl;
	cout << plan->initial();
	//Account::print();
}

MealPlanFund::~MealPlanFund()
{
	delete plan;
	plan=0;
}

