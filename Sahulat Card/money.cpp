#include "money.h"

Money::Money():R(0),P(0)
{
}

Money::Money( long Rupees , long Paisas  ):R(Rupees),P(Paisas)
{

}

long Money::Rupees() const // Accessor - Rupee value
{
    return R;
}
     
long Money::Paisas() const // Accessor - Paisa value
{
    return P;	
}
	  
Money Money::operator+ (const Money& n) const // Add two money values; return result
{
	 	Money m;
	 	m.R=n.R + R;
	 	m.P=n.P + P;
	 	return m;
}
     
Money Money::operator- (const Money& n) const // Subtract n; return result
{
	 	Money m;
	 	m.R= R - n.R ;
	 	m.P= P - n.P ;
	 	return m;
}
     
Money Money::operator* (int f) const // Multiply by f%; return result
{
	 	Money m;
	 	m.R= R * f ;
	 	m.P= P * f ;
	 	return m;
	 	
}

bool operator== (const Money& m, const Money &n)
{
	if(m.Rupees() == n.Rupees() && m.Paisas() == n.Paisas() )
	return 1;
	else
	return 0;
}
     
bool operator!= (const Money& m, const Money &n)
{
	if(m.Rupees() != n.Rupees() || m.Paisas() != n.Paisas() )
	return 1;
	else
	return 0;
}
     
bool operator < (const Money& m, const Money &n)
{
	if(m.Rupees() < n.Rupees())
	{
		
		return 1;
	}
	else
	{
		if(m.Rupees()== n.Rupees())
		{
		if(m.Paisas() < n.Paisas())
		return 1;
		else
		return 0;
	}
	}
}
     
bool operator<= (const Money& m, const Money &n)
{
	
	if(m.Rupees() <= n.Rupees())
	{
		return 1;
	}
	else
	{
		if(m.Rupees()== n.Rupees())
		{
		if(m.Paisas() <= n.Paisas())
		return 1;
		else
		return 0;
	    }
	}
}
     
bool operator> (const Money& m, const Money &n)
{

	if(m.Rupees() > n.Rupees())
	{
		
		return 1;
	}
	else
	{
		if(m.Rupees()== n.Rupees())
		{
		if(m.Paisas() > n.Paisas())
		return 1;
		else
		return 0;
	    }
	}
}
     
bool operator>= (const Money& m, const Money &n)
{
	
	if(m.Rupees() >= n.Rupees())
	{
		return 1;
	}
	else
	{
		if(m.Rupees()== n.Rupees())
		{
		if(m.Paisas() >= n.Paisas())
		return 1;
		else
		return 0;
	   }
	}
}
     
istream& operator>> (istream& s, Money& m)
{
	cout << "Enter Rupees\n";
	 s >> m.R ;
	 cout << "Enter Paisas\n";
   s >> m.P;
   return s;
}
     
ostream& operator<< (ostream& s , const Money& m)
{
	s << "Rupees:" << m.Rupees() << endl;
	s  << "Paisas:" << m.Paisas() << endl;
	
}

