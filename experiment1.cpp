#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
cout << "                 TicketSold               Ticket Price           Total Amount" << endl;
	cout << "Box               250                     5750                      "  << 250 * 5750 << endl;
	cout << "Sideline          100                     28000                     "  << 100 * 28000 << endl;
	cout << "Premium           50                      35750                     "  << 50 * 35750 << endl;
	cout << "GenAd             25                      18750                     "  << 25 * 18750 << endl << endl;
	cout << " THe total sale in the game is $" << 250 * 5750 + 100 * 28000 + 50 * 35750 + 25 * 18750 << "." <<endl;

_getch();
return 0;
}