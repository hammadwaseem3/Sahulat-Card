#ifndef DATE_H
#define DATE_H


#include <ctime>
#include <iostream>
#include <string>

using namespace std;



class Date 
{
	private:
		int day;
		int month;
		int year;
		
     public:
      Date(); // returns new Date = today
      
      
	  Date (int d, int m, int y); // constructor
	  
	  
      int rday() const ;// accessor
      
      
	  int rmonth() const; // accessor
	        
	  int ryear() const ;// accessor
	  
	  Date incDays (int t) ; // increments Date by some number of days
	  
	  Date incMonths (int t) ; // increments Date by some number of months
      
	  Date incYears (int t );  // increments Date by some number of years
	  
      friend istream& operator>> (istream& s , Date& d);
     
};

bool operator== (const Date& d1, const Date& d2);

bool operator!= (const Date& d1, const Date& d2) ;

bool operator< (const Date& d1, const Date& d2);

bool operator<= (const Date& d1, const Date& d2);

bool operator> (const Date& d1, const Date& d2);

bool operator>= (const Date& d1, const Date& d2);

ostream& operator<< (ostream& s, const Date& d);


#endif
