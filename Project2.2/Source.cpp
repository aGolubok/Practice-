#include <iostream>

using namespace std;

int main()
{

	int a = 0;
	cout << "Enter finger number 1-5"<<endl;
	cin >> a;


	if (a == 1)
		cout << "\nThumb \n";
	else if (a == 2)
		cout << "\nForefinger\n";
	else if (a == 3)
		cout << "\nMiddle finger\n";
	else if (a == 4)
		cout << "\nRing fingerö\n";
	else if (a == 5)
		cout << "\nLittle finger\n";
	else
		cout << "\nNo matches!\n\n";
}