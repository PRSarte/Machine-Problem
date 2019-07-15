#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

void Conic () //Conic Function
{
	double rad, hgt, vol, lat, bas, surf;
	double pi = 3.1415926535;

	cout << fixed << showpoint << setprecision(4);
	cout << "I can calculate the Volume, Lateral Area, Base Area and Surface area of your cone.\n" << endl;
	cout << "Input the Radius of your cone: ";
	cin >> rad;
	cout << "Input the height of your cone: ";
	cin >> hgt;
	//Asks for input of Radius and Height of cone.

	vol = (pi * rad * rad * hgt) / 3;
	lat = pi * rad * hgt;
	bas = pi * rad * rad;
	surf = lat + bas;
	//Cone Formulas

	if (rad <= 0 || hgt <= 0) 
	{
		cout << "Invalid input!" << endl;
		exit (0);
	}
	//exits program when 0 or lesser value is input in radius or height.
	else
	{
		cout << "Now calculating areas and volume of the cone." << endl;
		cout << "Press enter to continue.... " << endl;
		cin.ignore();
		cin.get();
	//waits for keypress before continuing with the code.

		cout << "The volume of the cone is: " << vol << endl;
		cout << "The Lateral Area of the cone is: " << lat << endl;
		cout << "The Base area of the cone is: " << bas << endl;
		cout << "The Surface area of the cone is: " << surf << endl;
	//Outputs Areas and Volume of the cone.
	}
}

void Pyramid () //Pyramid Function
{
	double lngt, wdt, hgt, vol, lat, bas, surf;
	double pi = 3.1415926535;
	bool abort = true;

	cout << fixed << showpoint << setprecision(4);
	cout << "I can calculate the Volume, Lateral Area, Base Area and Surface area of your pyramid.\n" << endl;
	cout << "Input the Length of your Pyramid: ";
	cin >> lngt;
	cout << "Input the Width of your Pyramid: ";
	cin >> wdt;
	cout << "Input the Height of your Pyramid: ";
	cin >> hgt;
	//Asks for input of Length, Width and Height of Pyramid.

	vol = (lngt * wdt * hgt) / 3;
	lat = ((lngt * sqrt (( lngt / 2 * (lngt / 2)) + (hgt * hgt ))) + (wdt * sqrt (( wdt / 2 * ( wdt / 2))) + (hgt * hgt)));
	bas = lngt * wdt;
	surf = lat + bas;
	//Pyramid Formulas
	
	if (lngt <= 0 || hgt <= 0 || wdt <= 0) 
	{
		cout << "Invalid input!" << endl;
		exit (0);
	}
	//Exits program when 0 or lesser value is input in length, width or height.

	else
	{
		cout << "Now calculating areas and volume of the Pyramid." << endl;
		cout << "Press enter to continue.... " << endl;
		cin.ignore();
		cin.get();

		cout << "The volume of the Pyramid is: " << vol << endl;
		cout << "The Lateral Area of the Pyramid is: " << lat << endl;
		cout << "The Base area of the Pyramid is: " << bas << endl;
		cout << "The Surface area of the Pyramid is: " << surf << endl;
	//Outputs areas and volume of pyramid.
	}
}

void Sphere () //Sphere function
{
	double rad, vol, surf;
	double pi = 3.1415926535;
	bool abort = true;

	cout << fixed << showpoint << setprecision (4);
	cout << "I can calculate the Volume and Surface area of your Sphere.\n" << endl;
	cout << "Input the Radius of the Sphere: ";
	cin >> rad;
	//Asks for input on radius of the sphere.

	vol = (4/3) * pi * (rad * rad * rad);
	surf = 4 * pi * (rad * rad);
	//Sphere formulas
	
	if (rad <= 0)
	{
		cout << "Invalid input!" << endl;
		exit (0);
	}
	//Exits the program when a value of 0 or less is input in the radius.
	else
	{
		cout << "Now calculating areas and volume of the Sphere." << endl;
		cout << "Press enter to continue.... " << endl;
		cin.ignore();
		cin.get();

		cout << "The volume of the Sphere is: " << vol << endl;
		cout << "The Surface area of the Sphere is: " << surf << endl;
	//Outputs the Volume and Surface area of the sphere.
	}
}

int main ()
{
	char choice1, choice2;
	bool abort = true;
	
	do
	{
		cout << "Welcome to the Geometric Calculator! Please input desired Shape to calculate: (C/P/S)";
		cin >> choice1;
		//Asks for input between C , P or S including lower cases.

		switch (choice1) //Chooses from whether conic,pyramid or sphere function will be called.
		{
			case 'c':
			case 'C':
				{
					Conic ();
					abort = false;
				}
				break;
			case 'p':
			case 'P':
				{
					Pyramid();
					abort = false;
				}
				break;
			case 's':
			case 'S':
				{
					Sphere();
					abort = false;
				}
				break;
			default:
				{
					cout << "Invalid input!" << endl;
					abort = true;
				}
				break;
		}

	cout << "Do you want to continue with another shape?: (Y/N)";
	cin >> choice2;
	//Asks for input to continue the loop or not
	switch (choice2)
	{
		case 'y':
		case 'Y':
			{
				abort = false;
			}
			break;
		case 'n':
		case 'N':
			{
				abort = true;
			}
			break;
		default :
			{
				cout << "Invalid input!" << endl;
				abort = true;
			}
			break;
	}
	}
	while (!abort);
//loop ends when abort becomes true.
_getch ();
return 0;
}
