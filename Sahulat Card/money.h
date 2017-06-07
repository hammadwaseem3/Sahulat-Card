#ifndef MONEY_H
#define MONEY_H

#include <string>
#include <iostream>

using namespace std;

class Money 
{
	private:
	long R;
	long P;	
    public:
     Money();
    
     Money( long Rupees , long Paisas );
	

     long Rupees() const; // Accessor - Rupee value
     
     
	 long Paisas() const; // Accessor - Paisa value
      
	 Money operator+ (const Money& n) const; // Add two money values; return result
	 
	 Money operator- (const Money& n) const; // Subtract n; return result
	 
	 Money operator* (int f) const ;// Multiply by f%; return result

     friend istream& operator>> (istream& s, Money& m);

	 
};
bool operator== (const Money& m, const Money &n);

     
bool operator!= (const Money& m, const Money &n);
     
bool operator < (const Money& m, const Money &n);
     
bool operator<= (const Money& m, const Money &n);

     
bool operator> (const Money& m, const Money &n);
     
bool operator>= (const Money& m, const Money &n);
     
ostream& operator<< (ostream& s , const Money& m);


#endif
