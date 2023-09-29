#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "No "
		 << "change "
		 << "here" << endl;
	cout << "Shift some text " << setw(25) << "to the right" << endl;
	cout << setw(50) << "Or shift it all" << endl;
	return 0;
}
