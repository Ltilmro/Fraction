

#include <iostream>
#include <cmath>
#include <sstream>
#include "Frac.h"
using namespace std;

Frac::Frac()
{
	num = 0;
	den = 1;
}
Frac::Frac(long int n, long int d)
{
	setFrac(n, d);
}
	void Frac::assFrac(long int numer, long int denom)
	{
	
	}
	void Frac::sNum(long int n)
	{
		num = n;
	}
	void Frac::sDen(long int d)
	{
		den = d;
	}
	int Frac::Algo(long int o, long int p)
	{
		if (o == 0)
		{
			return p;
		}
		else
		{
			if (o < p)
			{
				swap(o, p);
			}
			int r = o % p;
			while (r != 0)
			{
				o = p;
				p = r;
				r = o % p;
			}
			return p;
		}
	}
	void Frac::setFrac(long int b, long int c)
	{
		if (c == 0)
		{
			throw exception();
		}
		if (b == 0 && c == 1)
		{
			sNum(b);
			sDen(c);
		}
		else
		{
			long int algo = Algo(b, c);
			b = b / algo;
			c = c / algo;
			if (c < 0)
			{
				b = -b;
				c = -c;
			}
			sNum(b);
			sDen(c);
		}
	}
	void Frac::entFrac(long int x,long int y)
	{
			if (y < 0)
			{
				x = -x;
				y = -y;
			}
		setFrac(x, y);
	}
	int Frac::gNum()
	{
		return num;
	}
	int Frac::gDen()
	{
		return den;
	}
	string Frac::getFrac()
	{
		ostringstream zz0;
		zz0 << gNum() << "/" << gDen() << endl;
		sout = zz0.str();
		return sout;
	}
	Frac Frac::operator+(Frac x)
	{
		return Frac(num * x.den + x.num * den, den * x.den);
	}
	Frac Frac::operator-()
	{
		return Frac(-num,den);
	}
	Frac Frac::operator-(Frac x)
	{
		return Frac(num * x.den - x.num * den, den * x.den);
	}
	Frac Frac::operator*(Frac x)
	{
			return Frac(num * x.num, den * x.den);
	}
	Frac Frac::operator/(Frac x)
	{
		return Frac(num * x.den, den * x.num);
	}
	bool Frac::operator==(Frac x)
	{
		return (num * x.den == den * x.num);
	}
	bool Frac::operator!=(Frac x)
	{
		return (num * x.den != den * x.num);
	}
	bool Frac::operator<(Frac x)
	{
		return (num * x.den < den * x.num);
	}
	bool Frac::operator<=(Frac x)
	{
		return (num * x.den <= den * x.num);
	}
	bool Frac::operator>(Frac x)
	{
		return (num * x.den > den * x.num);
	}
	bool Frac::operator>=(Frac x)
	{
		return (num * x.den >= den * x.num);
	}
	string Frac::fOut()
	{
		ostringstream zz1;
		long double gn = gNum();
		long double gd = gDen();
		zz1 << gn / gd << endl;
		sout2 = zz1.str();
		return sout2;
	}
