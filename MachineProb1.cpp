#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	int b, c, top1, top2;
	double u, v, discrim;
	float truth=0,x,y;
	float i=0;

	cout << "This Program can factor second degree polynomials." << endl;
	cout << "Polynomial form example: x^2 + bx + c" << endl;
	cout << "Factored form example: (x + u)(x +v)\n" << endl;
	cout << "Input numerical coefficient of second term of polynomial form: ";
	cin >> b;
	cout << "Input constant (3rd term) ";
	cin >> c;

	cout << "\n\nNow finding the factors of the polynomial...." << endl;
	cin.ignore();
	cin.get();


	discrim = (b*b) - (4 * c);
	u = (- b + sqrt (float (discrim))) / 2;
	v = (- b - sqrt (float (discrim))) / 2;
	top1 = u * 2;
	top2 = v * 2;
	if (discrim < 0)
	{
		cout << "U and V are complex numbers." << endl;
	}
	else if (discrim > 0)
	{
		do
		{
			i = i + 10;
			x = i * i;
		}
		while (discrim>x);

		for(float j = i - 10;j <= i;j++)
			{	
				y=(j * j);

				if(y==discrim)
				{
					truth=1;
				}
			}
		if(truth==1)
		{
			if (top1 % 2 == 0 && top2 % 2 == 0)
			{
			cout << "The factored form of the polynomial is" << endl;
			cout << "(x - (" << u << ")) (x - (" << v << "))";
			}
			else if (top1 % 2 != 0 && top2 % 2 != 0)
			{
			cout << "U and V are not integers.";
			}
		}
		else 
		{
			cout <<" U and V are not integers.";
		}
	}
	else if (discrim == 0)
	{
		cout << "The polynomial is factorable." << endl;
		cout << "Factored form : (x - (" << u  << "))" << endl;
	}
	
	
_getch ();
return 0;
}		