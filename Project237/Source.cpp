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
		if (str[i] == '�') str[i] = '�';
		else if (str[i] == '�') str[i] = '�';
		else if (str[i] == '�') str[i] = '�';
		else if (str[i] == '�') str[i] = '�';
		else if (str[i] == '�') str[i] = '�';
		else if (str[i] == '�') str[i] = '�';
		else if (str[i] == '�') str[i] = '�';
		else if (str[i] == '�') str[i] = '�';
		else if (str[i] == '�') str[i] = '�';
		else if (str[i] == ' ') str[i] = ' ';
		else str[i]++;
	}
	cout << str;
	return 0;

}