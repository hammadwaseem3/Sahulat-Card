#include <iostream>
#include"SahulatCard.h"
#include"account.h"
#include"date.h"
#include"flexrupees.h"
#include"mealplan.h"
#include"mealplanfund.h"
#include"money.h"
#include"student.h"
#include"transaction.h"
#include"transfermealplanfund.h"

int main() 
{
	/*Student obj("hammad");
	SahulatCard obj_card;
	obj_card.setcard(obj);
	long R=0;
	long P=0;
	long pR=60;
	long pP=0;
	Money money_obj(R,P);
	Money purchase(pR,pP);
	MealPlan m_obj;
	m_obj.initialls(money_obj);
	m_obj.discountls(5);
	obj_card.addMealPlan(m_obj);
	obj_card.purchase(MEAL,purchase);
	//obj_card.addRupees(purchase);
	Date d;
	Date e;
	obj_card.transactionHistory(d,e);
	*/
	
	int i=4,p;
	Money purchase;
	Money rupees;
	Date da;
	Date e;
	cout << "******** Welcome ********" << endl;
	string s;
	cout << "Enter your name : ";
	cin >> s;
	cout << "Your Student ID for Sahulat Card is " << s << endl;
	Student obj(s);
	SahulatCard obj_card;
	obj_card.setcard(obj);
	cout << "\nSet the meal Plan\n";
	Money m;
	int d;
	cin >> m;
	cout << "Enter discount in mealplan\n";
	cin >> d;
	MealPlan mplan;
	mplan.initialls(m);
	mplan.discountls(d);
	obj_card.addMealPlan(mplan);
	cout << "Your Flex Account have 5000 =/ Rs , Your Meal plan is ";
	cout << m;
	cout << "discount : " << d;
	do
	{
		 cout << "\n\nPress following Keys for respective operation\n";
		 cout << "1- Purchase Item\n2- addRupees\n3- Print Transaction history\n4- exit\n\n" ;
		 cin >> i;
		switch(i)
		{
			case 1:
				cout << "\nPress following Keys for respective operation on account\n";
				cout << "1- Flex Account\n2- Meal Plan Account\n";
				cin >> p;
				cout << "Enter The ammount of purchase item\n";
				cin >> purchase;
				if(p==1)
                obj_card.purchase(FLEX,purchase);
				if(p==2)
				obj_card.purchase(MEAL,purchase);
		
				break;
              			
			case 2:
				cout << "\nEnter the ammount you want to add in Flex account\n";
				cin >> rupees;
				obj_card.addRupees(rupees);
				break;
			
			case 3:
				 cout << "Enter the Starting date\n";
				 cin >> da;
				 cout << "Enter the ending date\n";
				 cin >> e;
				 obj_card.transactionHistory(da,e);
			 	break;
			
			
		}
		
		
	}while(i != 4);
	return 0;
	
	
	
	
	
	
	
	
}
