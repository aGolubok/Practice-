#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	int d, t, k;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введiть k \n";
	cin >> k;
	d = k % 7; t = k / 7 + 1;
	if (d == 0) { d = 7; t--; }
	switch (d)
	{
	case 1:
		cout << "Понеділок, Тиждень " << t;
		break;

	case 2:
		cout << "Вівторок, Тиждень " << t;
		break;

	case 3:
		cout << "Середа, Тиждень " << t;
		break;

	case 4:
		cout << "Четверг, Тиждень " << t;
		break;

	case 5:
		cout << "П'ятниця, Тиждень " << t;
		break;

	case 6:
		cout << "Субота, Тиждень " << t;
		break;

	case 7:
		cout << "Неділя, Тиждень " << t;
		break;
	}

	return 0;
}