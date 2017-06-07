#include"flexrupees.h"

FlexRupees::FlexRupees()
{
	Money m(0,0);
	F_money=m;
}

FlexRupees::FlexRupees(Money m)
{
	F_money=m;
}
		
bool FlexRupees::purchase(Money amount)
{
	//cout << F_money ;
	if(F_money > amount)
	{
		Date d;
    	Transaction t(d,debit,amount);
    	t_vec.push_back(t);
		Money m(17,0);
		F_money=F_money-amount;
		F_money=F_money-m;
		return 1;
	}
	else
	return 0;
	
	//Account::mutatesub(m);
	//return Account::purchase(amount);
	
}

void FlexRupees::print_Transaction(Date s,Date e)
{
	for(int i=0;i < t_vec.size();i++)
   {
   	t_vec[i].print(s,e);
	}
}

Money FlexRupees::access()
{
   return F_money;
}	
		
void FlexRupees::Deposit(Money amount)
{
	FlexRupees::addR(amount);
}

void FlexRupees::addR(Money amount)
{
	Date de;
    Transaction te(de,deposit,amount);
    	t_vec.push_back(te);
	F_money=F_money + amount;
    
}

		
void FlexRupees::print()
{
	cout << endl <<F_money;
}
