#pragma once

#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;
class Frac
{
private:
	long int num;
	long int den;
	string sout, sout2;
public:
	Frac();
	Frac(long int n, long int d);
	Frac operator+(Frac x);
	Frac operator-();
	Frac operator-(Frac x);
	Frac operator*(Frac x);
	Frac operator/(Frac x);
	bool operator==(Frac x);
	bool operator!=(Frac x);
	bool operator<=(Frac x);
	bool operator>(Frac x);
	bool operator>=(Frac x);
	bool operator<(Frac x);
	void assFrac(long int numer, long int denom);
	void sNum(long int n);
	void sDen(long int n);
	int Algo(long int o, long int p);
	void setFrac(long int b, long int c);
	void entFrac(long int n, long int d);
	int gNum();
	int gDen();
	string getFrac();
	string fOut();
};
