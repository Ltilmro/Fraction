#include <iostream>
#include <cmath>
#include "Frac.h"
using namespace std;

int main()
{
	try
	{
		Frac a;
		long int a1, a2;
		cout << "Enter first fraction\n";
		cin >> a1 >> a2;
		a.entFrac(a1, a2);
		cout << a.getFrac();
		cout << a.fOut();
		cout << "Unary minus\n";
		cout << (-a).getFrac();
		Frac b;
		long int b1, b2;
		cout << "Enter second fraction\n";
		cin >> b1 >> b2;
		b.entFrac(b1, b2);
		cout << b.getFrac();
		cout << b.fOut();
		if (a == b)
		{
			cout << "The fractions are equal" << endl;
		}
		if (a != b)
		{
			cout << "The fractions are not equal" << endl;
		}
		if (a > b)
		{
			cout << "The first is greater" << endl;
		}
		if (a <= b)
		{
			cout << "The first is not greater" << endl;
		}
		if (a < b)
		{
			cout << "The second is greater" << endl;
		}
		if (a >= b)
		{
			cout << "The second is not greater" << endl;
		}
		cout << "Sum is\n";
		cout << (a + b).getFrac();
		cout << "Difference is\n";
		cout << (a - b).getFrac();
		cout << "Product is\n";
		cout << (a * b).getFrac();
		cout << "Quotient is\n";
		cout << (a / b).getFrac();
	}
	catch (exception)
	{
	cerr<<"ERROR: CAN'T DIVIDE BY ZERO"<<endl;
	}
	return 0;
}