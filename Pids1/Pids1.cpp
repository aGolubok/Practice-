#include <iostream>

using namespace std;

int main()
{
	int n;
	int i;
	int res;

	cout << "Enter a number to calculate factorial ";
	cin >> n;
	res = 1;
	for (i = 1; i <= n; i++)
	{
		res = res * i;
	}
	cout << res;
}