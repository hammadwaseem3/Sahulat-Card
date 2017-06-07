#include "date.h"
     Date:: Date() // returns new Date = today
      {
	  
      time_t t = time(0);   // get time now
      struct tm * now = localtime( & t );
      day=now->tm_mday;
      month=now->tm_mon+1;
      year=now->tm_year + 1900;
    
      }
      
	 Date:: Date (int d, int m, int y):day(d),month(m),year(y) // constructor
	  {
	  }
	  
      int Date::rday() const // accessor
      {
      	
      	return day;
	  }
      
	  int Date::rmonth() const // accessor
	  {
	  	return month;
	  }
      
	  int Date::ryear() const // accessor
	  {
	  	return year;
	  }
	  
	 
      
	  Date Date::incDays (int t)  // increments Date by some number of days
	  {
	  	day=day+t;
	  	return *this;
	  }
      
	  Date Date::incMonths (int t)  // increments Date by some number of months
      {
      	month = month + t;
      	return *this ;
	  }
	  Date Date::incYears (int t )  // increments Date by some number of years
      {
      	year=year+t;
      	return *this;
	  }


bool operator== (const Date& d1, const Date& d2)
{
	if(d1.rday() == d2.rday() && d1.rmonth() == d2.rmonth() && d1.ryear() == d2.ryear())
	return 1;
	else
	return 0;
	
}

bool operator!= (const Date& d1, const Date& d2) 
{
	if(d1.rday() != d2.rday() || d1.rmonth() != d2.rmonth() || d1.ryear() != d2.ryear())
	return 1;
	else
	return 0;
}

bool operator< (const Date& d1, const Date& d2)
{
	if(d1.ryear() < d2.ryear())
	{
		return 1;
	}
	else
	{
		if(d1.rmonth() < d2.rmonth())
		{
			return 1;
		}
		else
		{
			if(d1.rday() < d2.rday())
			return 1;
			else
			return 0;
		}
	}
	
}

bool operator<= (const Date& d1, const Date& d2)
{
if(d1.ryear() <= d2.ryear())
	{
		return 1;
	}
	else
	{
		if(d1.rmonth() <= d2.rmonth())
		{
			return 1;
		}
		else
		{
			if(d1.rday() <= d2.rday())
			return 1;
			else
			return 0;
		}
	}
	
}

bool operator> (const Date& d1, const Date& d2)
{
	if(d1.ryear() > d2.ryear())
	{
		return 1;
	}
	else
	{
		if(d1.rmonth() > d2.rmonth())
		{
			return 1;
		}
		else
		{
			if(d1.rday() > d2.rday())
			return 1;
			else
			return 0;
		}
	}
	
}

bool operator>= (const Date& d1, const Date& d2)
{
if(d1.ryear() >= d2.ryear())
	{
		return 1;
	}
	else
	{
		if(d1.rmonth() >= d2.rmonth())
		{
			return 1;
		}
		else
		{
			if(d1.rday() >= d2.rday())
			return 1;
			else
			return 0;
		}
	}
	
}

ostream& operator<< (ostream& s, const Date& d)
{
	s << "Day: " <<d.rday() << endl;
	s << "Month: " << d.rmonth() << endl;
	s << "Year: " << d.ryear() << endl;
	return s;
}

istream& operator>> (istream& s , Date& d)
{
   cout << "Enter Day\n";
   s >> d.day ;
   cout << "Enter month\n";
   s >> d.month;
   cout << "Enter year\n";
   s >> d.year;
   return s;
}

