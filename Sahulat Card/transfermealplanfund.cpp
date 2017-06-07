#include"transfermealplanfund.h"

TransferMealPlanFund::TransferMealPlanFund()
{
	Tplan=0;
}

		
TransferMealPlanFund::TransferMealPlanFund(Money m)
{
	
	Tplan=new MealPlan;
	Tplan->initialls(m);
	Tplan->discountls(0);
	//Tplan=&m;
	

}

TransferMealPlanFund::TransferMealPlanFund(MealPlan *m)
{
	Tplan = m;
}

void TransferMealPlanFund::addR(Money amount)
{
	Tplan->set(Tplan->add(amount));
    
}

Money TransferMealPlanFund::access()
{
	return Tplan->initial();
}

void TransferMealPlanFund::print_Transaction(Date s,Date e)
{
	for(int i=0;i < t_vec.size();i++)
   {
   	t_vec[i].print(s,e);
	   }	
	}	

		
bool TransferMealPlanFund::purchase(Money amount)
{
	if(Tplan->initial() > amount)
    {
    	
	Date d;
    Transaction t(d,debit,amount);
    t_vec.push_back(t);
    Money temp(Tplan->Discount(),0);
	amount=amount - temp;
	Money temp_gst(17,0);
	
	Tplan->set(Tplan->sub(amount));
	Tplan->set(Tplan->sub(temp_gst));
    return 1;
	}
	else
	return 0;
	
}
		
void TransferMealPlanFund::addMealPlan(MealPlan* m)
{
	m->set(m->add(Tplan->initial()));
	Tplan=new MealPlan;
	Tplan=m;
}
		
void TransferMealPlanFund::print()
{
	cout << Tplan->Discount() << endl;
	cout << Tplan->initial();
	
}

TransferMealPlanFund::~TransferMealPlanFund()
{
	delete Tplan;
	Tplan=0;
}

