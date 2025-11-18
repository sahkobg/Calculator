#include <iostream>
#include <cmath>
using namespace std;

void printadd(double a, double b, string type)
{
	cout << a << " + " << b << " = " << a + b;
}
void printsubtract(double a, double b, string type)
{
	cout << a << " - " << b << " = " << a - b;
}
void printmultiply(double a, double b, string type)
{
	cout << a << " * " << b << " = " << a * b;
}
void printdivide(double a, double b, string type)
{
	cout << a << " / " << b << " = " << a / b;
}
void printpow(double a, double b, string type)
{
	cout << a << " pow " << b << " = " << pow(a,b);
}
int main()
{

	cout << "<--- Calculator --->" << endl;
	cout << endl;
	cout << "1. Add (+)" << endl;
	cout << "2. Subtract (-)" << endl;
	cout <<	"3. Multiply (*)" << endl;
	cout << "4. Divide (/)" << endl;
	cout << "5. Power (pow)" << endl;
	cout << endl;
	cout << "<------------------>" << endl;
	double a, b;
	string type;
	cin >>type>> a >> b;

	if (type == "+")
	{
		printadd(a, b, type);
	}
	else if (type == "-")
	{
		printsubtract(a, b, type);
	}
	else if (type == "*")
	{
		printmultiply(a, b, type);
	}
	else if (type == "/")
	{
		printdivide(a, b, type);
	}
	else if (type == "pow")
	{
		printpow(a, b, type);
	}

	return 0;
}
