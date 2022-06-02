#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'ÿ') str[i] = 'à';
		else if (str[i] == 'è') str[i] = '³';
		else if (str[i] == '³') str[i] = '¿';
		else if (str[i] == '¿') str[i] = 'é';
		else if (str[i] == 'ù') str[i] = 'ü';
		else if (str[i] == 'ü') str[i] = 'þ';
		else if (str[i] == '²') str[i] = '¯';
		else if (str[i] == '¯') str[i] = 'é';
		else if (str[i] == 'Ù') str[i] = 'ü';
		else if (str[i] == ' ') str[i] = ' ';
		else str[i]++;
	}
	cout << str;
	return 0;

}