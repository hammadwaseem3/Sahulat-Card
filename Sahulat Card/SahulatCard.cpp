#include"SahulatCard.h"

SahulatCard::SahulatCard():barcode(0314),PIN(0),active(0)
{
	//s=new Student;
	s=NULL;
	accounts[0]=new FlexRupees;
}
     
void SahulatCard::setcard(Student st) // constructor
{
	barcode=0314;
	active=1;
	s = new Student(st);
    PIN=new int;
    *PIN=142185;
    Date D;
	activate=D;
	expiry=D.incYears(2);
	Money m(5000,0);
	accounts[0]=new FlexRupees(m);
	accounts[1]=new MealPlanFund;
	accounts[2]=new TransferMealPlanFund;
/*	cout << active << endl ;
	cout << activate << endl;
	cout << expiry << endl;
	cout << s->getStudent();
*/	
}
Student SahulatCard::getstudent()
{
	return *s;
}

SahulatCard SahulatCard::operator = (SahulatCard  sc) 
{
	SahulatCard c=sc;
	return c;
}
     
bool SahulatCard::purchase( AccountType A, const Money &amount)
{
	if((accounts[1]->access()) < amount)
	A = FLEX;
	if(A == FLEX)
	{
	
		 accounts[0]->purchase(amount);
	
	     cout << "Your remaining balance in flex account is\n";
	     accounts[0]->print();
	}
	else
	{
		if(A == MEAL)
		{
			
			 accounts[1]->purchase(amount);
			
	         cout << "Your remaining balance in MealPlanFund account is\n";
	         accounts[1]->print();
		}
		else
		{
			if(A == TRANSFER)
			{
				accounts[2]->purchase(amount);
			    
	            cout << "Your remaining balance in TransferMealPlan account is\n";
	            accounts[2]->print();
			}
		}
	}
	
	
}

SahulatCard::SahulatCard(  SahulatCard &obj)   
{
	s=new Student;
	PIN = new int;
	*s=*obj.s;
	barcode = obj.barcode;
	*PIN=  *obj.PIN;
	active = obj.active;
	expiry = obj.expiry;
	accounts[0]= new FlexRupees;
	*accounts[0] = *obj.accounts[0];
}


	  
// debit amount from specified account; return success code
     
void SahulatCard::addMealPlan( MealPlan& m) // add meal plan to SahulatCard
{
	//cout << m.Discount();
	//cout << m.initial();
	
	accounts[1]=new MealPlanFund(&m);
	accounts[2]=new TransferMealPlanFund(&m);
	//accounts[1]->print();
	
}

     
void SahulatCard::endOfMealPlan()
{
	//not done;
	delete accounts[0];
	delete accounts[1];
	delete accounts[2];
	accounts[1]=0;
	accounts[2]=0;
	accounts[0]=0;
	
}
     /*remove meal plan; transfer unused funds to Transfer Meal Plan account */
     
void SahulatCard::addRupees(const Money &amount )
{
	accounts[0]->addR(amount);
	accounts[0]->print();
}
// add money to FlexRupees account
     
void SahulatCard::transactionHistory(const Date &start, const Date &end)const
{
	cout << "Flex account:-\n";
	accounts[0]->print_Transaction(start,end);
	
	cout << "Meal Plan Fund account:-\n";
	accounts[1]->print_Transaction(start,end);
	
	cout << "Transfer Meal Plan Fund account:-\n";
	accounts[2]->print_Transaction(start ,end);
	
	
}

SahulatCard::~SahulatCard()
{
	delete accounts[0];
	delete accounts[1];
	delete accounts[2];
	accounts[1]=0;
	accounts[2]=0;
	accounts[0]=0;
	
	delete s;
	s=NULL;
	
}
