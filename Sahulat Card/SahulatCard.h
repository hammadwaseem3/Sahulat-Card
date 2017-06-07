#ifndef SAHULATCARD_H
#define SAHULATCARD_H


#include <iostream>
#include"date.h"
#include"money.h"
#include"account.h"
#include"mealplan.h"
#include"flexrupees.h"
#include"mealplan.h"
#include"mealplanfund.h"
#include"transfermealplanfund.h"
#include"student.h"

using namespace std;


enum AccountType {FLEX, MEAL, TRANSFER};
class SahulatCard
{
	private:
	static const int NUM;
    Student *s;
    long barcode;
    int* PIN;
    bool active;
    Date expiry;
    Date activate;
    Account* accounts[3];
    long newBarcode();
	
    public:
     SahulatCard();
     
     void setcard(Student); // constructor
     
     SahulatCard(SahulatCard &obj);
     
     Student getstudent();
     
     bool purchase( AccountType, const Money &amount);
      // debit amount from specified account; return success code
     
     void addMealPlan(MealPlan& ); // add meal plan to SahulatCard
     
     void endOfMealPlan();
     /*remove meal plan; transfer unused funds to Transfer Meal Plan account */
     
     void addRupees(const Money &amount );
     // add money to FlexRupees account
     
     void transactionHistory( const Date &start, const Date &end)const;
     
     SahulatCard operator = (SahulatCard );
		
	 ~SahulatCard();	
	
};

#endif
