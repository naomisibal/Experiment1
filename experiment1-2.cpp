#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
	double mass,density;
	cout<<"Enter mass (g): "; 
	cin >> mass;
	cout << "Enter density (g per cubic cm):";
	cin >> density;

	cout << "volume is" << mass/(4*density) << "cm^3" <<endl;

_getch();
return 0;
}